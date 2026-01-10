// Bubble Sort là thuật toán sắp xếp đơn giản
// Lặp đi lặp lại qua mảng, so sánh từng cặp phần tử kề nhau và hoán đổi chúng nếu chúng ở sai thứ tự
// Quá trình này được lặp lại cho đến khi không còn hoán đổi nào nữa
// Độ phức tạp thời gian: O(n^2) trong trường hợp xấu nhất

#include <iostream>
#include <vector>
using namespace std;
 
void swap (int &a, int &b) {
    int temp = a;
    a = b; 
    b = temp;
}

void BubbleSort (vector <int> &a, int n) {
    for (int i = 0; i < n-1; i++)
    {
        // Sau mỗi lần lặp, phần tử lớn nhất sẽ được đặt đúng vị trí ở cuối mảng
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    BubbleSort(a, n);
    for (int i = 0; i< n; i++) {
        cout << a[i] << " ";
    }

}