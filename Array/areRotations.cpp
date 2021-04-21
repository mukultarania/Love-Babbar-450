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

bool areRotation(string st1, string st2) {
	if (st1.length() != st2.length()) {
		return 0;
	}

	string temp = st1 + st2;
	return (temp.find(st2) != string::npos);
}

int main() {
	c_p_c();
	// string st1 = "ABCD", st2 = "DABC";
	string st1, st2;
	cin >> st1;
	cin >> st2;
	if (areRotation(st1, st2)) {
		cout << "String " << st1 << " and " << st2 << " are in rotation" << endl;
	} else {
		cout << "Not in Rotation " << endl;
	}

	return 0;
}