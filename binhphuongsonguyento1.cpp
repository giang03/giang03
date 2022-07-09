#include <bits/stdc++.h>

using namespace std;

bool prime[1001];

void sang(){
	for(int i = 0 ; i <= 1000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i*i <= 1000; i++){
		for(int j = i*i; j <= 1000; j+=i)
			prime[j] = 0;
	}
}

bool check(int n){
	sang();
	int i = 2;
	while(i <= n/i){
		if(prime[i] && n%i == 0){
			n/=i;
			if(n%i==0){
				return 1;
				break;
			}
		}
		else i++;
	}
	return 0;
}

int main() {
	int a,b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		if(check(i)) cout << i << ' ' ;
	}
    return 0;
}

