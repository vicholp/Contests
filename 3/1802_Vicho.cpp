#include <bits/stdc++.h>
#include <iomanip>
using namespace std;


int main(){
    int a, b = 0;
    
    vector<vector<int> > libros(5, vector<int>(0));
    vector<long long > tamano;
    for (int i = 0; i < 5; ++i){
        cin >> a;
        for (int j = 0; j < a; ++j){
            cin >> b;
            libros[i].push_back(b);
        }
    }

    for (int i = 0; i < libros[0].size(); ++i){
        for (int j = 0; j < libros[1].size(); ++j){
            for (int k = 0; k < libros[2].size(); ++k){
                for (int l = 0; l < libros[3].size(); ++l){
                    for (int m = 0; m < libros[4].size(); ++m){
                        tamano.push_back(libros[0][i]+libros[1][j]+libros[2][k]+libros[3][l]+libros[4][m]);
                    }  
                }              
            }
        }
    }
    sort(tamano.begin(),tamano.end());
    //tamano.erase(unique(tamano.begin(),tamano.end()),tamano.end());
    for (int i = 0; i < tamano.size(); ++i){
        //cout << tamano[i]<< endl;
    }

    long long r, t = 0;
    r = 0;
    cin >> t;
    //cout << endl;
    for(int i = 0; i < t; i++){
    
        r += tamano[tamano.size()-i-1];
        //cout << tamano[tamano.size()-i-1] << endl;
    }
    cout << r << endl;
}

