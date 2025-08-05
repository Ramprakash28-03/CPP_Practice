#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> A, B;
            for (int i = 1; i <= n / 2; ++i) {
                if (i % 2 == 1) {
                    A.push_back(i);
                } else {
                    B.push_back(i);
                }
            }
            for (int i = n / 2 + 1; i <= n; ++i) {
                if (i % 2 == 0) {
                    A.push_back(i);
                } else {
                    B.push_back(i);
                }
            }

            for (int i = 0; i < n / 2; ++i) {
                cout << A[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < n / 2; ++i) {
                cout << B[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}