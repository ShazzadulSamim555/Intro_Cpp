#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; // number of stones
        cin >> n;

        int even = 0, odd = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        // If both even and odd counts are of the same parity
        if ((even % 2 == 0 && odd % 2 == 0) || (even % 2 == 1 && odd % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
