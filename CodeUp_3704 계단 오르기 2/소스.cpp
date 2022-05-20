#include <iostream>
#define N 1000
#define MAX 100001
using namespace std;

int memo[MAX];
int f(int n)
{
	if (memo[n])
		return memo[n];
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;

	return memo[n] = (f(n - 1) + f(n - 2) + f(n - 3)) % N;
}
int main()
{
	int n;
	cin >> n;
	cout << f(n);
	return 0;
}