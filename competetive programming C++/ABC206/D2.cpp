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
    set<pair<int, int>> ss;
    for (int i = 0; i < s; i++)
    {
        if(a[i] != a[n-1-i])
        {
            ss.insert({a[i], a[n-1-i]});
            ss.insert({a[n-1-i], a[i]});
        }
    }
    cout << size(ss) / 2 << endl;
}
