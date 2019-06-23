#include <bits/stdc++.h>

using namespace std;

int p, n = 0;

int main(){

	cin >> p >> n;

	int altos[n];

	for (int i = 0; i < n; ++i){
		int a;
		cin >> a;
		altos[i] = a;
	}
	for (int i = 1; i < n; ++i){
		if(abs(altos[i]-altos[i-1]) > p){
			cout << "GAME OVER" << endl;
			return 0;
		}
	}
	cout << "YOU WIN" << endl;
	
}
