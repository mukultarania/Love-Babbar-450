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

int findCandidate(int arr[], int n) {
	int maj_ind = 0, cnt = 1;
	for (int i = 1; i < n; i++) {
		if (arr[maj_ind] == arr[i])
			cnt++;
		else
			cnt--;

		if (cnt == 0) {
			maj_ind = i;
			cnt = 1;
		}
	}

	return arr[maj_ind];
}

bool isMajority(int arr[], int n, int cad) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == cad) cnt++;
	}

	if (cnt > n / 2)
		return 1;
	else
		return 0;
}

/* Function to print Majority Element */
void printMajority(int a[], int size)
{
	/* Find the candidate for Majority*/
	int cand = findCandidate(a, size);

	/* Print the candidate if it is Majority*/
	if (isMajority(a, size, cand))
		cout << " " << cand << " ";

	else
		cout << "No Majority Element";
}


int32_t main()
{
	c_p_c();
	int arr[] = { 1, 1, 2, 1, 3, 5, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	printMajority(arr, n);

	return 0;
}