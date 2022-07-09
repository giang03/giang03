#include <bits/stdc++.h>

using namespace std;

long long uocso(long long n){
	long long i = 2;
	while(i <= n/i){
		if(n%i==0) n/=i;
		else i++;
	}
	return n;
}

int main() {
	int t;
	cin >> t;
	long long n;
	while(t--){
		cin >> n;
		cout << uocso(n) << endl;
	}
    return 0;
}

