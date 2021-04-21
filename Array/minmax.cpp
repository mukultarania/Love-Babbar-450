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

struct Pair {
	int min;
	int max;
};

//Linear Search O(n) ------------------------------
struct Pair getMinMax(int arr[], int n) {
	struct Pair minmax;
	if (n == 1) {
		minmax.min = arr[0];
		minmax.max = arr[0];
	}

	//Initialize min and max
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}

	for (int i = 2; i < n; i++) {
		if (arr[i] > minmax.max) {
			minmax.max = arr[i];
		} else if (arr[i] < minmax.min) {
			minmax.min = arr[i];
		}
	}
	return minmax;
}
//Linear Search End--------------------------------------------------

//Tournament Method------------------------------------------------------------
struct Pair getMinMaxTour(int arr[], int low,
                          int high)
{
	struct Pair minmax, mml, mmr;
	int mid;

	// If there is only one element
	if (low == high)
	{
		minmax.max = arr[low];
		minmax.min = arr[low];
		return minmax;
	}

	// If there are two elements
	if (high == low + 1)
	{
		if (arr[low] > arr[high])
		{
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else
		{
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}

	// If there are more than 2 elements
	mid = (low + high) / 2;
	mml = getMinMaxTour(arr, low, mid);
	mmr = getMinMaxTour(arr, mid + 1, high);

	// Compare minimums of two parts
	if (mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;

	// Compare maximums of two parts
	if (mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;

	return minmax;
}



void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	c_p_c();
	int arr[] = { 1000, 11, 445, 1, 330, 3000 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArr(arr, n);
	struct Pair mm = getMinMax(arr, n);
	cout << "Minimum element is "
	     << mm.min << endl;
	cout << "Maximum element is "
	     << mm.max << endl;

	struct Pair mm2 = getMinMaxTour(arr, 0, n - 1);
	cout << "Minimum element is "
	     << mm2.min << endl;
	cout << "Maximum element is "
	     << mm2.max;
}