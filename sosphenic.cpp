#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		int dem = 0;
		if(n%i==0){
			cnt++;
			while(n%i==0){
				dem++;
				n/=i;
			}
		}
		if(dem > 1) return 0;
	}
	if(cnt == 2)
		return 1;
	else return 0;
}

int main() {
	long long n;
	cin >> n;
	cout << check(n) << endl;
    return 0;
}

