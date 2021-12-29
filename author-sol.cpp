#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		bool checker = true;
		// if the length of the string is even, then the answer exists, otherwise false
		if ((int) s.size() % 2 == 0) {
			// let N = length of the given string
			// for every 0 <= i <= (N / 2) - 1, check if s[i] is equal to s[i + N / 2]
			for (int i = 0; i < (int) s.size() / 2; i++) {
				if (s[i] != s[i + (int) s.size() / 2]) {
					checker = false;
					break;
				}
			}
		} else {
			checker = false;
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
  return 0;
}
