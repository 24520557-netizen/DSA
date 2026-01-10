// Tìm kiếm tuyến tính: O(n)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    int find;
    cin >> find;
    int pos;
    for (int i = 0; i<n;i++) {
        cin >> a[i];
    }
    for (int i = 0; i<n;i++) {
        if (a[i] == find) pos = i; break;
    }
    if (a[pos] == find ) cout << "Vi tri la: " << pos << endl;
    else cout << "Not find";
    return 0;
}