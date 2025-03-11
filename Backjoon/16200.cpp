#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;
vector<int> v1;
int N;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	v1.resize(N);
	for (int y = 0; y < N; y++) {
		cin >> v1[y];
	}
	sort(v1.begin(), v1.end(), greater<int>());

	int ans = 0;
	int maxP = -1;
	int curP = 0;
	while (!v1.empty()) {
		if (maxP == -1) {
			maxP = v1.back();
			v1.pop_back();
			curP++;
			continue;
		}
		if (maxP == curP) {
			maxP = -1;
			curP = 0;
			ans++;
			continue;
		}
		else {
			curP++;
			v1.pop_back();
		}
	}

	if (curP > 0) ans++;
	cout << ans;
	return 0;
}