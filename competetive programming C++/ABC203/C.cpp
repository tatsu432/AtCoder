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
	long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> data(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> data[i].first >> data[i].second;
    }
    sort(data.begin(), data.end());
    for(long long i = 0; i < n; i++)
    {
        if (k >= data[i].first)
        {
            k += data[i].second;
        }
        else
        {
            
        }
    }
}