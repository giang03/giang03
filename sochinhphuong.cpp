#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	long long i = sqrt(n);
	if(i*i == n) return 1;
	else return 0;
}

int main() {
	unsigned long long n;
	cin >> n;
	if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

