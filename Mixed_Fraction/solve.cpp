#include <bits/stdc++.h> // include a lot of functionality of C++. This is a combination of many libraries
using namespace std;

int main ()
{
    freopen("mixin.txt" , "r", stdin);
    freopen("mixout.txt" , "w", stdout);


    int n, d, div, rem ;
    cin >> n >> d;
    div = n / d;
    rem = n % d;

    if (rem == 0)
    {
        cout << div << endl;

    }
    else
    {
        cout << div << " " << rem << "/" << d << endl;
    }
    return 0;
}