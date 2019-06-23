#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

double pi = 3.141592654;

double rad(double a){
    return a * pi / 180.0;
}

int main(){

    cout << fixed << setprecision(2);
    
    double a, b, c = 0.0;

    while(cin >> a >> b >> c){

    double d = tan(rad(a));

    cout << ( ((d*b + c)*5.0) ) << endl;
    
    a = 0.0;
    b = 0.0;
    c = 0.0;
    }
}

