#include <bits/stdc++.h>

using namespace std;

int n = 0;

int main(){

	string q;
	cin >> n;
	getline(cin, q);

	for (int i = 0; i < n; ++i){

		bool z = true;
		string a, b, c, d;
		getline(cin, a);
		getline(cin, b);
		getline(cin, c);

		a.erase(std::unique(a.begin(), a.end()), a.end());

		for (int i = 0; i < b.length(); ++i){
			int q = a.find(b[i]);
			if(q != -1){
				a.erase(q,1);

			}else{
				z = false;
				
			}

		}
		for (int i = 0; i < c.length(); ++i){
			int q = a.find(c[i]);

			if(q != -1){
				a.erase(q,1);

			}else{
				z = false;
				
			}

		}

		sort(a.begin(), a.end());
		if(z){
			cout << a << endl;
		}else{
			cout << "CHEATER" << endl;
		}

	}
	
}
