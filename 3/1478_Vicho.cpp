#include <bits/stdc++.h>

using namespace std;

vector<int> num;

//Ni idea como funciona.

int main(){
    for (int i = -100; i < 101; ++i){
        if(i != -1 && i != 0){
            num.push_back(i);
        }
    }
    int a;

    while(cin >> a){

        if(a == 0){
            continue;
        }

        for (int j = 0; j < a; ++j){
            if(j == 99){
                cout << "";
            }else{
                if(j < 9) {
                    cout << "  ";
                }else{
                    cout << " ";
                }
            }
            
            for (int k = 0; k < a; ++k){
                
                int q = 3-floor(log10(abs( num[ abs( (99)-j+k ) ] )));

                for (int i = 0; i < q; ++i){
                    if(k!=0)
                    cout << " ";
                }
                cout << abs( num[ abs( (99)-j+k ) ] );

                

            }
            cout << endl;
        }
        cout << endl;  
    }
}
        
	

