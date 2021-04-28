#include<bits/stdc++.h>
using namespace std;

// #define int             long long
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

// Time Complexity: O(n*n).
// A nested loop is needed where both the loops traverse the array from start to end, so the time complexity is O(n^2).
// Auxiliary Space: O(1).
// As no extra space is required for any operation so the space complexity is constant.

void findMajority(int arr[], int n) {
	int maxcnt = 0;
	int ind = -1;
	for (int i = 0 ; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j]) cnt++;
		}
		if (cnt > maxcnt) {
			maxcnt = cnt;
			ind = i;
		}
	}
	if (maxcnt > n / 2)
		cout << arr[ind] << endl;
	else
		cout << "No Majority Element";

}

int32_t main()
{
	c_p_c();
	int arr[] = { 1, 1, 2, 1, 3, 5, 1, 3, 3, 3, 3, 3 , 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	findMajority(arr, n);

	return 0;
}