#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int BinarySearch (const vector <int> &a, int start, int end, int find) {
    int mid = start + (end - start)/2;
    if (start > end) return -1;
    else if (mid == find) return mid;
    else if (mid < find) {
        BinarySearch (a, start + 1, end, find);
    }
    else {
        BinarySearch (a, start, end - 1, find );
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int find;
    cin >> find;
    int k = BinarySearch(a, 0, n - 1, find);
    cout << k;
    return 0;
}