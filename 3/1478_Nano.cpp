#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while(cin>>n){

    if(n==0) break;
    int Matrix[n][n];
    int a=n;
    //cout<<"al menos llego aca?"<<endl;
    while(n--){

      //cout<<"hola no estoy bugeado"<<endl;
      int h=a-n-1;
      //cout<<h<<endl;
      for(int i=h;i<a;i++){
        for(int j=h;j<a;j++){
          if(i>j){
            Matrix[i][j]=i-h+1;
          }
          else{
            Matrix[i][j]=j-h+1;
          }
        }
      }
      //cout<<h<<endl;

    }
    for(int i=0;i<a;i++){
      if(i == 99){
        cout << "";
      }else{
        if(i < 9) {
          cout << "  ";
        }else{
          cout << " ";
        }
      }

      for(int j=0;j<a;j++){

        int q = 3-floor(log10(abs( Matrix[ abs(i) ][j] )));
        //cout<<"q vale "<<q<<endl;
        for(int k=0;k<q;k++){
          if(j!=0)
            cout << " ";
        }
        cout<<Matrix[i][j];
        //cout<<"a";
      }
      cout<<endl;
    }
    cout<<endl;
  }
	return 0;
}
