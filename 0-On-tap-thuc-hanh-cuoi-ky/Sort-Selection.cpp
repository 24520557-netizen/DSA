// Selection Sort là thuật toán sắp xếp cơ bản nhất
// Tìm lần lượt phần tử nhỏ nhất để đưa về đầu tiên -> thứ hai -> ...
// Độ phức tạp thời gian: O(n^2)

#include <iostream>
#include <vector>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;
}

void SelectionSort (vector <int> &a, int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) min = j;
        }
        swap (a[min], a[i]);
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SelectionSort(a, n);
    for (int i = 0; i< n; i++) {
        cout << a[i] << " ";
    }

}