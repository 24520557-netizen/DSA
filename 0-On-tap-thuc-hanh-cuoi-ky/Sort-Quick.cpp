// Quick Sort dựa trên thuật toán chia để trị
// Độ phức tạp trung bình: O(n log n)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(vector<int> &a, int left, int right) {
    if (left < right) {
        int pivot = a[right]; // Chọn phần tử cuối làm chốt
        int i = left - 1; // Chỉ số của phần tử nhỏ hơn chốt
        for (int j = left; j < right; j++) {
            if (a[j] < pivot) {
                i++; 
                swap(a[i], a[j]);
            }
        }
        swap(a[i + 1], a[right]); // Đặt chốt vào vị trí đúng
        int partition = i + 1; // Vị trí chốt sau khi sắp xếp

        quickSort(a, left, partition - 1); // Sắp xếp bên trái chốt
        quickSort(a, partition+ 1, right); // Sắp xếp bên phải chốt
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i< n; i++) {
        cout << a[i] << " ";
    }

}