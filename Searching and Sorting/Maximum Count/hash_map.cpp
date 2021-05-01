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

//Moore VOting Algorithm
// Time Complexity: O(n).
// As two traversal of the array is needed, so the time complexity is linear.
// Auxiliary Space: O(1).
// As no extra space is required.

void findMajority(int arr[], int n) {
	unordered_map<int, int> un;
	int count = 0;
	for (int i = 0; i < n; i++) {
		un[arr[i]]++;
	}
	for (auto i : un) {
		if (i.second > n / 2) {
			count = 1;
			cout << "Majority Element Found " << i.first << " Occurence: " <<
			     i.second << endl;
			break;
		}
	}
	if (count == 0)
		cout << "No Majority Element Present";

}

int32_t main()
{
	c_p_c();
	int arr[] = { 1, 1, 2, 1, 3, 5, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	findMajority(arr, n);

	return 0;
}