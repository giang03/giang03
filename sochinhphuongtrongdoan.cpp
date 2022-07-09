#include <bits/stdc++.h>

using namespace std;



int main() {
	long long a,b;
	cin >> a >> b;
	for(long long i = ceil(sqrt(a)) ; i <= sqrt(b); i++){
		cout << i*i << ' ';
	}
    return 0;
}

