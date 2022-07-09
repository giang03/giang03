#include <bits/stdc++.h>

using namespace std;

bool snt(int n){
	if( n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int tong(int n) {
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}

int tongchan(int n) {
	int sum = 0;
	while(n){
		if((n%10)%2==0){
			sum += n%10;
		}
		n/=10;
	}
	return sum;
}

int tongnt(int n){
	int sum = 0;
	while(n){
		if(snt(n%10)){
			sum += n%10;
		}
		n/=10;
	}
	return sum;
}

int daoso(int n){
	int so = 0;
	while(n){
		so = so*10 + n%10;
		n/=10;
	}
	return so;
}

int souoc(int n){
	int cnt = 0;
	for(int i = 2; i <= n ; i++){
		if(n%i == 0 && snt(i)) cnt++;
	}
	return cnt;
}

int uocnt(int n){
	int i = 2;
	while(i<=n/i){
		if(n%i==0) n/=i;
		if(n%i!=0) i++;
	}
	return n;
}

bool ktraso(int n){
	while(n){
		if(n%10 == 6) return 1;
		n/=10;
	}
	return 0;
}

bool tongchiahet(int n){
	if(tong(n)%8 == 0) return 1;
	else return 0;
}

long long giaithua(int n){
	long long gt = 1;
	for(int i = 2; i <= n; i++){
		gt*=i;
	}
	return gt;
}

long long tonggt(int n){
	long long tong = 0;
	while(n){
		tong += giaithua(n%10);
		n/=10;
	}
	return tong;
}

bool ktrachuson(int n){
	int a = n%10;
	n/=10;
	while(n){
		if(a != n%10) return 0;
		n/=10;
	}
	return 1;
}

bool ktrasochuso(int n){
	int a = n%10 , b;
	n/=10;
	while(n){
		b = n%10;
		if(b > a) return 0;
		n/=10;
	}
	return 1;
}

int demchuso(int n){
	int dem = 0;
	while(n){
		dem++;
		n/=10;
	}
	return dem;
}

long long tongluythua(int n){
	long long tong = 0;
	int a = demchuso(n);
	while(n){
		tong += pow(n%10,a);
		n/=10;
	}
	return tong;
}

int main() {
	int n;
	cin >> n;
	cout << snt(n) << endl;
	cout << tong(n) << endl;
	cout << tongchan(n) << endl;
	cout << tongnt(n) << endl;
	cout << daoso(n) << endl;
	cout << souoc(n) << endl;
	cout << uocnt(n) << endl;
	cout << ktraso(n) << endl;
	cout << tongchiahet(n) << endl;
	cout << tonggt(n) << endl;
	cout << ktrachuson(n) << endl;
	cout << ktrasochuso(n) << endl;
	cout << tongluythua(n) << endl;
    return 0;
}

