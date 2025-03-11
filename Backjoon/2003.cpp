#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, M;
int arr[10001];
int dp[10001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	for (int y = 1; y <= N; y++) {
		cin >> arr[y];
		dp[y] = dp[y - 1] + arr[y];
	}

	int ans = 0; 

	for (int y = N; y >= 0; y--) {
		for (int x = y - 1; x >= 0; x--) {
			int tmp = dp[y] - dp[x];
			if (tmp == M) ans++;
		}
	}
	cout << ans;
	return 0;
}