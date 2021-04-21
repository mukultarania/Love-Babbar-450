#include <iostream>
using namespace std;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void rr(int arr[], int n, int x) {
	int ct = 0, in;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			in = i;
			ct++;
		}
	}
	if (ct == 0) {
		cout << -1 << endl;

	} else if (ct == 1) {
		cout << in << " " << in << endl;
	} else {
		cout << in - ct + 1 << " " << in << endl;
	}


}

int main() {
	//code
	c_p_c();
	int t;
	cin >> t;
	while (t--) {
		int n, x;

		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		rr(arr, n, x);


	}
	return 0;
}