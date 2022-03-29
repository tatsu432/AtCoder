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


int main()
{
    long long small = 1000000007;
    int n;
    cin >> n;
    long long a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long big = a[0] + 1;
    big %= small;
    for (int i = 1; i < n; i++)
    {
        big *= (a[i] - a[i - 1] + 1);
        big %= small;
    }
    cout << big << endl;

}