#include <bits/stdc++.h>

using namespace std;


int snt(long long n){
	if(n<2) return 0;
	for(int i = 2; i*i < n; i++){
		if(n%i == 0){
			return 0;
			break;
		}
	}
	return 1;
}
int main() {
	long long n;
	cin >> n;
	if(snt(n)) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}

