#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<set>
#include<map>
#include<utility>
#include<list>
#include <queue>

using namespace std;



int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long c = 0;
    for (long long i = 0; i < n-1; i++)
    {
        if(a[i] == a[i+1])
            {
                c++;
            }
        else 
            {
                if(c >= 1)
                {
                    b.push_back(c+1);
                }
                c = 0;
            }
        if (i == n-2 && c != 0)
        {
            b.push_back(c+1);
        }
    }
    long long an = n * (n-1) / 2;
    for (long long i = 0; i < size(b); i++)
    {
        an -= b[i] * (b[i] - 1) / 2;
    }
    cout << an << endl;
}
