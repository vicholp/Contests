#include <bits/stdc++.h>

using namespace std;

//Numeros calculados antes, pow falla en la salida con numeros tan grandes

int main(){
	long long a;
	cin >> a;
	if(a > 12){

		switch (a){
			case 13:
				cout << "1594323";
				break;
			case 14:
				cout << "4782969";
				break;
			case 15:
				cout << "14348907";
				break;
			case 16:
				cout << "43046721";
				break;
			case 17:
				cout << "129140163";
				break;
			case 18:
				cout << "387420489";
				break;
			case 19:
				cout << "1162261467";
				break;
			case 20:
				cout << "3486784401";
				break;
		}
		cout << endl;
	}else{
		cout << pow(3,a) << endl;
	}
	
}
