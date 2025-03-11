#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int N;
string ori;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> N;

	cin >> ori;
	int dotpos = ori.find("*");

	string frontori = ori.substr(0, dotpos);
	string backori = ori.substr(dotpos + 1, ori.size());

	string tmp;
	for (int y = 0; y < N; y++) {
		cin >> tmp;

		if (tmp.size() < frontori.size() + backori.size()) {
			cout << "NE\n";
			continue;
		}

		string fronttmp = tmp.substr(0, frontori.size());
		string backtmp = tmp.substr(tmp.size() - backori.size(), tmp.size());

		if (frontori == fronttmp && backtmp == backori) {
			cout << "DA\n";
		}
		else cout << "NE\n";
	}
	return 0;
}