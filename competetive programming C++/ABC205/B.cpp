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
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i+1;
    }
    sort(a.begin(), a.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
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