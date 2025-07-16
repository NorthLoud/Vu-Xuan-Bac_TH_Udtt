#include <iostream>
#include <string>
using namespace std;

const int N = 6;
string names[N] = { "Trang", "Cong", "Trung", "Binh", "Hoan", "Mai" };

void hoanVi(string a[], int left, int right, int &count) {
    if (left == right) {
        count++;
        cout << count << ": ";
        for (int i = 0; i < N; i++) {
            cout << a[i] << (i < N - 1 ? ", " : "\n");
        }
    } else {
        for (int i = left; i <= right; i++) {
            swap(a[left], a[i]);
            hoanVi(a, left + 1, right, count);
            swap(a[left], a[i]); // backtrack
        }
    }
}

int main() {
    int count = 0;
    hoanVi(names, 0, N - 1, count);
    cout << "Tong cong co " << count << " cach xep." << endl;
    return 0;
}
