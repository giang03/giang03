#include <bits/stdc++.h>

using namespace std;

bool prime[10001];

void sang(){
	for(int i = 0; i <= 10000; i++)
		prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2 ; i <= 100; i++){
		if(prime[i]){
			for(int j=i*i; j <= 10000; j+=i)
				prime[j] = 0;
		}
	}
}

int sum(long long n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

bool check(long long n){
	long long a = n;
	int  tong = 0;
	int i = 2;
	while(i <= n/i){
		if(n%i == 0){
			if(n>9)	tong += sum(i);
			else tong += i;
			n/=i;
		}
		else i++;
	}
	if(n!=1) tong += sum(n);
	if(tong == sum(a)) return 1;
	else return 0;
}

int main() {
	sang();
	long long n;
	cin >> n;
	if(prime[n]) cout << "NO" << endl;
	else if(check(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

