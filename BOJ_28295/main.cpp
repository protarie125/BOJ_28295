#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	vector<char> dc{ 'N', 'E', 'S', 'W' };
	int dir = 0;

	for (auto i = 0; i < 10; ++i) {
		int x;
		cin >> x;

		if (1 == x) {
			dir += 1;
			dir %= 4;
		}
		else if (2 == x) {
			dir += 2;
			dir %= 4;
		}
		else if (3 == x) {
			dir -= 1;
			if (dir < 0) {
				dir += 4;
			}
		}
	}

	cout << dc[dir];

	return 0;
}