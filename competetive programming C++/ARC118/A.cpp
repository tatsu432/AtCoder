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
	long long t, n;
	cin >> t >> n;
	if (100 * n % t == 0)
	{
		cout << 100 * n / t + n - 1 << endl;
	}
	else
	{
		cout << 100 * n / t + n << endl;
	}
}