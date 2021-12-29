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
		int n = (int) s.size();
		string first_half = "";
		// get the first half of the string (s[0], s[1], ..., s[n / 2 - 1])
		for (int i = 0; i < n / 2; i++) {
			first_half += string(1, s[i]);
		}
		// get the second half of the string starting from the end (s[n - 1], s[n - 2], ..., s[n / 2])
		string second_half = "";
		for (int i = n - 1; i >= n / 2; i--) {
			second_half += string(1, s[i]);
		}
		// reverse the second half of the string formed above
		reverse(second_half.begin(), second_half.end());
		// check if the first half is equal to the second half
		cout << (first_half == second_half ? "YES" : "NO") << '\n';
	}
  return 0;
}