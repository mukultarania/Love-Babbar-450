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

// Link https://www.geeksforgeeks.org/find-a-pair-with-the-given-difference/

// The function assumes that the array is sorted
bool findPair(int arr[], int size, int n)
{
	// Initialize positions of two elements
	int i = 0;
	int j = 1;

	// Search for a pair
	while (i < size && j < size)
	{
		if (i != j && arr[j] - arr[i] == n)
		{
			cout << "Pair Found: (" << arr[i] <<
			     ", " << arr[j] << ")";
			return true;
		}
		else if (arr[j] - arr[i] < n)
			j++;
		else
			i++;
	}

	cout << "No such pair";
	return false;
}

int32_t main()
{
	c_p_c();
	int arr[] = {1, 8, 30, 40, 100};
	int size = sizeof(arr) / sizeof(arr[0]);
	int n = 60;
	findPair(arr, size, n);
	return 0;
}