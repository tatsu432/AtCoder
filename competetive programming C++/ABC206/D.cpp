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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = n / 2;
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if(a[i] != a[n - i - 1])
        {
            count++;
            for (int j = i+1; j <= n-i-2; j++)
            {
                if(a[j] == a[i])
                {
                    a[j] = a[n-i-1];
                }
            }
        }
    }
    cout << count << endl;
}
