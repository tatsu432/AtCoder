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

char aa(char a1, char a2)
{
    if (a1 == a2)
    {
        return a1;
    }
    else if ((a1 == 'B' && a2 == 'R') || (a1 == 'R' && a2 == 'B'))
    {
        return 'W';
    }
    else if ((a1 == 'W' && a2 == 'R') || (a1 == 'R' && a2 == 'W'))
    {
        return 'B';
    }
    else if ((a1 == 'B' && a2 == 'W') || (a1 == 'W' && a2 == 'B'))
    {
        return 'R';
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> c(n);
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        c[n - 1].push_back(a);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            char b = aa(c[i + 1][j], c[i + 1][j + 1]);
            c[i].push_back(b);
        }
    }
    cout << c[0][0] << endl;
}