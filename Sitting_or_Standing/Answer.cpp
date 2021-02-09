#include <bits/stdc++.h> // include a lot of functionality of C++. This is a combination of many libraries
using namespace std;

int main()
{
    freopen("sitin.txt", "r", stdin);   // r = read format
    freopen("sitout.txt", "w", stdout); // w = write format

    int r, s, t;
    cin >> r >> s;
    cin >> t;
    int numberOfSeats = r * s;
    if (numberOfSeats >= t)
    {
        cout << t << " " << 0 << endl;
    }
    else
    {
        cout << numberOfSeats << " " << (t - numberOfSeats) << endl;
    }

    return 0;
}
