#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<set>
#include<utility>

using namespace std;

int fun(int p)
{
    return p * (p + 1) / 2;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        for (int i = 1; i <= a; i++)
        {
            if (i != 1)
            {
                cout << " ";
            }
            cout << i << " " << -1 * i;
        }
        cout << endl;
    }
    else if (a > b)
    {
        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
        }
        for (int i = 1; i < b; i++)
        {
            cout << -1 * i << " ";
        }
        cout << -1 * (fun(a) - fun(b - 1)) << endl;
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            cout << -1 * i << " ";
        }
        for (int i = 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << (fun(b) - fun(a - 1)) << endl;
    }
}