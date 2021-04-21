#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//quick sort by partition
void negposarr(int arr[], int n) {
	int l = 0, m = 0, h = n - 1;

	while (l <= h) {
		if (arr[m] >= 0) {
			swap(arr[h--], arr[m]);
		} else if (arr[m] < 0) {
			swap(arr[l++], arr[m++]);
		}
	}
}

//by two pointer approach
void shiftall(int arr[], int n) {
	int l = 0, r = n - 1;
	while (l <= r) {
		if (arr[l] < 0 && arr[r] < 0) {
			l++;
		} else if (arr[r] > 0 && arr[l] > 0) {
			r--;

		} else if (arr[l] > 0 && arr[r] <= 0) {
			swap(arr[l++], arr[r--]);
		} else {
			l++; r--;
		}
	}
}

int main() {
	c_p_c();
	int arr[] = { -1, 	 -2, -1, 21 , 10, 12, 221 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// negposarr(arr, n);
	// printArr(arr, n);

	shiftall(arr, n);
	printArr(arr, n);
}

