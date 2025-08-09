#include <iostream>
using namespace std;
int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;

    string num;
    cin >> num;

    if (num.length() == N)
    {
        int xth = num[X - 1] - '0';
        int yth = num[Y - 1] - '0';

        if ((xth % yth == 0) || (yth % xth == 0))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    else
    {
        cout << "Enter " << N << "number";
    }

    return 0;
}