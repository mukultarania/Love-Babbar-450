#include<bits/stdc++.h>
using namespace std;

#define int             long long
#define pb              push_back
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	c_p_c();
	int a = 1, b = 2;
	int d = a++ + ++b;
	cout << d << " " << a << " " << b;


}