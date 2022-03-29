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
	long long a, b, c;
    cin >> a >> b >> c;
    int m = c % 2;
    if(abs(a) == abs(b))
    {
        if(a==b)
        {
            cout << "=" << endl;
        }
        else if(a < b)
        {
            if(m==0)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        else
        {
            if(m==0)
            {
                cout << "=" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
    }
    else if(a == 0)
    {
        if((b>0)||(b<0&&m==0))
        {
            cout << "<" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
    }
    else if(b==0)
    {
        if(a<0&&m==1)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << ">" << endl;
        }
    }
    else if (a>0&&b>0)
    {
      if(a<b){
        cout << "<" << endl;
      }
      else
    {
        cout << ">" << endl;
    }
    }
    else if (a<0&&b<0)
    {
        if((m==0&&b<a)||(m==1&&a<b))
        {
            cout << "<" << endl;
        }
      else
    {
        cout << ">" << endl;
    }
    }
    else if (a<0&&b>0)
    {
        if((m==0&&abs(a)<abs(b))||(m==1))
        {
            cout << "<" << endl;
        }
      else
    {
        cout << ">" << endl;
    }
    }
    else if(a>0&&b<0)
    {
        if(m==0&&abs(a)<abs(b))
        {
            cout << "<" << endl;
        }
      else
    {
        cout << ">" << endl;
    }
    }
    
}