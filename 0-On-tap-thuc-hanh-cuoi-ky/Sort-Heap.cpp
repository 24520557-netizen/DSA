// Heap Sort là một thuật toán sắp xếp dựa trên cấu trúc dữ liệu heap.
// Thuật toán này bao gồm hai giai đoạn chính: xây dựng heap và sắp xếp.

#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Khởi tạo largest là gốc
    int left = 2 * i + 1; // con trái
    int right = 2 * i + 2; // con phải

    // Nếu con trái lớn hơn gốc
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Nếu con phải lớn hơn largest hiện tại
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Nếu largest không phải là gốc
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Gọi đệ quy heapify cho cây con bị ảnh hưởng
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    cout << "Mảng ban đầu: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    heapSort(arr);

    cout << "Mảng đã sắp xếp: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}