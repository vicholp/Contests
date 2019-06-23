#include <bits/stdc++.h>

using namespace std;


int main(){
	int a, b, c = 0;
	cin >> a >> b >> c;

	if ((a+b+c)%24 < 0){
		cout << 24+((a+b+c)%24) << endl;
	}else{
		cout << (a+b+c)%24 << endl;
	}
	return 0;
}
