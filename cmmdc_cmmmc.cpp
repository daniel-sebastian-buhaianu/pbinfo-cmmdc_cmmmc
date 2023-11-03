#include <iostream>
using namespace std;
long long cmmdc(long long, long long);
int main()
{
	long long a, b, c;
	cin >> a >> b;
	c = cmmdc(a, b);
	cout << c << ' ' << a/c * b;
	return 0;
}
long long cmmdc(long long a, long long b)
{
	while (b)
	{
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
}
// scor 100
