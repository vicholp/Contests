#include <bits/stdc++.h>

using namespace std;

int main(){
	int carros;

	vector<int> resultados;

	while(true){ //BLOQUE
		cin >> carros;
		if(carros == 0){
			for (int i = 0; i < resultados.size(); ++i){
				if(resultados[i] == 2){
					cout << endl;
				}else{
					if(resultados[i] == 1){
						cout << "Yes" << endl;
					}else{
						cout << "No" << endl;
					}
				}
				

			}
			return 0;
		} 
		bool z = true;

		while(z){ //LINEA
			bool r, q; //resultado

			r = false;
			q = true;

			int a[carros];
			cin >> a[0];
			if(a[0] == 0){
				z = false;
			}else{
				for (int i = 1; i < carros; ++i){
					cin >> a[i];
				}
			

				//PROCESO

				stack<int> A;
				stack<int> B;

				for (int i = carros; i > 0; --i){
					A.push(i);
				}

				int it = 0;

				while(it != carros && !r){
					//cout << "A size: " << A.size() << endl;

					if(A.size() == 0 && B.top() != a[it]){
						//cout << " NO CUMPLE" << endl;
						r = true;
						q = false;
					}else{



						//cout << "A: " << A.top() << endl;

						B.push(A.top());
						A.pop();

						//cout << "B: " << B.top() << endl;
						//cout << "it: " << it << endl;
						//cout << "r: " << a[it] << endl;


						if(B.top() == a[it]){
							//cout << "SIRVE " << a[it] << " it " << it+1 << endl;
							B.pop();
							it++;

							while(B.size() != 0 && B.top() == a[it]){
								//cout << "SIRVE " << a[it] << " it " << it+1 << " SIZE " <<  B.size() << endl;
								B.pop();
								it++;
							}
						}

						
						
						
						//cout << endl;
					}

				}

				if(q){
					//cout << "								Yes" << endl;
					resultados.push_back(1);

					}else{
						//cout << "								No" << endl;
						resultados.push_back(0);
				}
			}
			//cout << "OTRA LINEA-------------------------" << endl;
		}
		//cout << "OTRo CASO-------------------------" << endl;
		resultados.push_back(2);

	}


	


}

