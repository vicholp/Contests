#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b = 0;
	vector< vector<int> > resultados ( 31, vector<int> (1) );

	for (int k = 1; k < 31; k++){


		int p = 0;

		for (int i = k; i > 0 && p < 1001; i--){
			for (int j = 0; j < i && p < 1001; ++j){
				p += i;
				resultados[k].push_back(p);
			}
		}
	}

	
	while(cin >> a >> b){
		bool c = false;
		if(a == 0 && b == 0){
			return 0;
		}
		for (int i = 1; i <= b; ++i){
			for (int j = 0; j < resultados[i].size(); ++j){
				if(resultados[i][j] == a){
					cout << "possivel" << endl;
					c = true;
					i = b;
				}
			}

		}
		if(!c){
			cout << "impossivel" << endl;
		}
	}
	

	
}
