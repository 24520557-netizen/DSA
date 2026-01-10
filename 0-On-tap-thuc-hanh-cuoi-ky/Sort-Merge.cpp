// Merge Sort dựa trên thuật toán chia để trị
// Độ phức tạp trung bình: O(n log n)
// Ý tưởng chính: Chia mảng thành hai nửa, sắp xếp từng nửa, sau đó gộp hai nửa đã sắp xếp lại với nhau.


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int left, int mid, int right) {
    int n1 = mid - left + 1; // số phần tử trong nửa trái
    int n2 = right - mid; // số phần tử trong nửa phải

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = a[left + i]; // sao chép nửa trái vào mảng tạm L
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j]; // sao chép nửa phải vào mảng tạm R

    int i = 0; 
    int j = 0; 
    int k = left; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { // so sánh và gộp hai nửa
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &a, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        merge(a, left, mid, right);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

