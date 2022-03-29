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
    int n, x, t;
    cin >> n >> x >> t;
    if(n%x==0)
    {
        cout << t * (n / x) << endl;
    }
    else 
    {
        cout << t * (n / x + 1)<< endl;
    }
}
