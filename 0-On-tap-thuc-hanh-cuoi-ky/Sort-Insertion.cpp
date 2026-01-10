// Insertion Sort sắp xếp theo quy tắc chèn
// Chia mảng thành hai phần: đã sắp xếp và chưa sắp xếp
// Lấy lần lượt từng phần tử từ phần chưa sắp xếp và chèn vào phần đã sắp xếp ở vị trí thích hợp
// Độ phức tạp thời gian: O(n^2) trong trường hợp xấu nhất

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void swap (int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;
}

void InsertionSort (vector <int> &a, int n) {
    for (int i = 0; i < n; i++)
    {
        int key = a[i]; // Phần tử cần chèn
        int j = i - 1; // Vị trí cuối cùng của phần đã sắp xếp
        // Dịch chuyển các phần tử lớn hơn key sang phải
        while (j >=0 && a[j] > key) {
            a[j+1] = a[j]; // Dịch chuyển
            j = j - 1; // Di chuyển sang trái
        }
        a[j+1] = key;
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    InsertionSort(a, n);
    for (int i = 0; i< n; i++) {
        cout << a[i] << " ";
    }

}