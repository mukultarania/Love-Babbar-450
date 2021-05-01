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

// Link https://www.geeksforgeeks.org/search-an-element-in-an-array-where-difference-between-adjacent-elements-is-1/
// Complexity Analysis:
// Time Complexity: O(n)
// Auxiliary Space: O(1)

void findFirstOcc(int arr[], int n, int x) {
	int i = 0 ;
	while (i < n) {
		if (arr[i] == x) {
			cout << x << " Present at index " << i << endl;
			return;
		}

		i = i + abs(arr[i] - x);
	}

	cout << "Element not Present" << endl;
}

int32_t main()
{
	c_p_c();
	int arr[] = { 8 , 7, 6, 7, 6, 5, 4, 3, 2, 3, 4, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x;
	// cout << "Enter Element to find " << endl;
	cin >> x;
	// Function calling
	findFirstOcc(arr, n, x);

	return 0;
}