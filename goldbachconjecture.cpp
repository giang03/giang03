#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

void sieve(){
	for(int i = 0; i<= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j =i*i; j<=1000000; j+=i){
				prime[j] = 0;
			}
		}
	}
}
	
int main() {
	sieve();
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		int a = floor(n/2);
		for(int i = 2; i <= a; i++){
			if(prime[i] && prime[n-i]) cout << i << ' ' << n - i << endl;
		}
	}
    return 0;
}

