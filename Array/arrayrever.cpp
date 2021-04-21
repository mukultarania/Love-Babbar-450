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

//O(n) complex
void reversArr(int arr[], int n) {
	int start = 0, end = n - 1;
	while (start <= end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

//Recursive way o(n)
void recrevArray(int arr[], int start, int end) {

	if (start >= end) return;

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;

	//Recursive function calling
	recrevArray(arr, start + 1, end - 1);
}

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	c_p_c();
	int arr[] = {1, 2, 3 , 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, n);
	reversArr(arr, n);
	printArr(arr, n);
	recrevArray(arr, 0, n - 1);
	printArr(arr, n);
}