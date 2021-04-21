
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
public:
	int countSquares(int N) {
		// code here
		int ct = 0;
		for (int i = 1; i < N; i++) {
			if (i * i < N) {
				ct++;
			} else {
				break;
			}
		}
		return ct;
	}
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;

		cin >> N;

		Solution ob;
		cout << ob.countSquares(N) << endl;
	}
	return 0;
}  // } Driver Code Ends