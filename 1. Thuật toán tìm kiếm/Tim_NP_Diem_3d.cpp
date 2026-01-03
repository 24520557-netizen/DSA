#include <iostream>
#include <vector>
using namespace std;

struct Diem {
    double x, y, z;
};

int Compare(const Diem &a, const Diem &b) {
    if (a.x != b.x) return a.x < b.x ? -1 : 1;
    if (a.y != b.y) return a.y < b.y ? -1 : 1;
    if (a.z != b.z) return a.z < b.z ? -1 : 1;
    return 0; 
}

int BSearch(const vector<Diem> &arr, Diem key) {
    int left = 0, right = arr.size() - 1;
    int steps = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        steps++;
        int cmp = Compare(key, arr[mid]);
        if (cmp == 0) return steps;
        else if (cmp < 0) right = mid - 1;
        else left = mid + 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<Diem> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i].x >> A[i].y >> A[i].z;
    }

    int m;
    cin >> m;
    vector<Diem> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i].x >> B[i].y >> B[i].z;
    }
    for (int i = 0; i < m; i++)
    {
        int result = BSearch(A, B[i]);
        if (result == 0) cout << "KHONG\n";
        else cout << result << "\n";
    }
    return 0;
}
