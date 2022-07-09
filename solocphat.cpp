#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	while(n){
		if(n%10 != 0 && n%10 != 6 && n%10 != 8 ){
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}

int main() {
	long long n;
	cin >> n;
	if(check(n)) cout << 1 << endl;
	else cout << 0 << endl;
    return 0;
}

