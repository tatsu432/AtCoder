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
#include<bitset>


using namespace std;
using ll = int64_t;

int main() {
	ll n, k;
	cin >> n >> k;
	vector<pair<int, bool>> aa(n);
	vector<pair<int, int>> bb(n);
	vector<bool> cc(n);
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		aa[i].first = a + b + c;
		bb[i].first = a + b + c;
		bb[i].second = i;
		cc[i] = true;
	}
	sort(aa.begin(), aa.end());
	reverse(aa.begin(), aa.end());
	sort(bb.begin(), bb.end());
	reverse(bb.begin(), bb.end());
	for (ll i = 0; i < n; i++)
	{
		if (i < k)
		{
			aa[i].second = true;
		}
		else if (aa[i].first + 300 >= aa[k - 1].first)
		{
			aa[i].second = true;
		}
		else
		{
			aa[i].second = false;
		}
	}
	for (ll i = 0; i < n; i++)
	{
		cc[bb[i].second] = aa[i].second;
	}
	for (ll i = 0; i < n; i++)
	{
		if (cc[i])
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}

