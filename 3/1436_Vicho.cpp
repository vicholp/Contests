#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t = 0;
    vector<int> num;
    cin >> t;
    for (int i = 0; i < t; ++i){
        int a = 0;
        cin >> a;

        for (int j = 0; j < a; ++j){
            int b = 0;
            cin >> b;
            num.push_back(b);
        }
        cout << "Case " << i+1 << ": " << num[int(a/2)] << endl;
        num.clear();
    }
    
    
}
    