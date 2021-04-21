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
//Dutch National Flag Algorithm
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}

//By counting 0 1 2
void ct012(int arr[], int n) {
	int ze = 0, on = 0, tw = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) ze++;
		if (arr[i] == 1) on++;
		if (arr[i] == 2) tw++;
	}

	int ii = 0;
	// Store all the 0s in the beginning
	while (ze > 0) {
		arr[ii++] = 0;
		ze--;
	}

	// Then all the 1s
	while (on > 0) {
		arr[ii++] = 1;
		on--;
	}

	// Finally all the 2s
	while (tw > 0) {
		arr[ii++] = 2;
		tw--;
	}
}


int main() {
	c_p_c();
	int arr[] = { 1, 0 , 2, 1, 2 , 0, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// printArr(arr, n);
	// sort012(arr, n);
	// printArr(arr, n);
	ct012(arr, n);
	printArr(arr, n);
}

