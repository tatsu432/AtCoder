#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<iomanip>
#include<set>
#include<utility>

using namespace std;


int main()
{
	long double n;
	long double x0, y0, xn2, yn2;
	cin >> n >> x0 >> y0 >> xn2 >> yn2;
	long double pi = 3.14159265358979;
	long double a, b;
	a = (x0 + xn2) / 2;
	b = (y0 + yn2) / 2;
	long double x1, y1;
	x1 = cos(2.00000 * pi / n) * (x0 - a) - sin(2.00000 * pi / n) * (y0 - b) + a;
	y1 = sin(2.00000 * pi / n) * (x0 - a) + cos(2.00000 * pi / n) * (y0 - b) + b;
	cout << x1 << " " << y1 << endl;
}