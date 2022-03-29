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
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }	
    for(long long i = 0; i < q; i++)
    {
        long long k;
        cin >> k;
        if(k < a[0])
        {
            cout << k << endl;
        }

        else if(k + n > a[n - 1])
        {
            cout << k + n << endl;
        }

        else 
        {
            for(long long j = 0; j < n; j++)
        {
            if(a[j] <= k)
            {
                k++;
            }
            else
            {
                break;
            }
        }
        cout << k << endl;
        }
    }

}