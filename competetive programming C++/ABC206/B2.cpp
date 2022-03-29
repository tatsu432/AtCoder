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
   for (long long i = 1;; i++)
       {
           if (i*(i+1) >= 2 * n)
           {
               cout << i << endl;
               break;
           }
       }
}
