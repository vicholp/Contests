#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int p;

int main(){

	cin >> p ;

	for (int i = 0; i < p; ++i){
		
		bool c = true;
		int n;
		cin >> n;

		string a;
		cin >> a;
		string b;

		for (int i = 1; i < n; ++i){
			
			cin >> b;
			if(a!=b){
				c = false;
			}
		}

		if (c){
			cout << a << endl;
		}else{
			cout << "ingles" << endl;
		}
	}
	
}
