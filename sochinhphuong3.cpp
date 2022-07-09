#include <bits/stdc++.h>

using namespace std;

int main() {
	long long a,b;
	cin >> a >> b;
	int cnt = 0;
	int c = ceil(sqrt(a));
	int d = sqrt(b);
	cnt = d-c+1;
	cout << cnt << endl;
    return 0;
}

