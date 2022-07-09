#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0){
			return 0;
			break;
		}
	}
	return 1;
}

bool checknt(long long n){
	while(n){
		if( n%10 != 2 && n%10 != 3 && n%10 != 5 && n%10 != 7){
			return 0;
			break;
		}	
		n/=10;
	}
	return 1;
}

bool check(long long n){
	int sum = 0;
	while(n){
		sum += n%10;
		n/=10;
	}
	if(snt(sum)) return 1;
	else return 0;
}

int main(){
	long long a,b;
	int cnt = 0;
	cin >> a >> b;
	for(int i = (a); i <= (b) ; i++ ){
		if(checknt(i) && check(i) && snt(i)) 
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}

