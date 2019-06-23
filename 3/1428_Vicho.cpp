#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    
    float a, b, c;
    cin >> c;
    for (int i = 0; i < c; ++i){
        cin >> a >> b;
        int a2, b2 = 0;
        a2 = floor(a/3);
        b2 = floor(b/3);
        //cout << a2 << " " << b2 << endl;
        cout << fixed << setprecision(0) << a2*b2 << endl;
        //cout << endl;
    }
    
}