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
    vector<pair<int, int>> a(n);
    vector<pair<int, int>> c(n);
    vector<int> aa;
    vector<int> cc;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> c[i].first >> c[i].second;
    }
    bool flag = true;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int d = (a[i].first - a[j].first) * (a[i].first - a[j].first) + (a[i].second - a[j].second) * (a[i].second - a[j].second);
            aa.push_back(d);
            int e = (c[i].first - c[j].first) * (c[i].first - c[j].first) + (c[i].second - c[j].second) * (c[i].second - c[j].second);
            cc.push_back(e);
        }
    }
    sort(aa.begin(), aa.end());
    sort(cc.begin(), cc.end());
    for(int i = 0; i < size(aa); i++)
    {
        if(aa[i] != cc[i])
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}
