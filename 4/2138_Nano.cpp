#include <bits/stdc++.h>
using namespace std;

int main() {
  string linea;
  while(cin>>linea){
    int Array[10];
    for(int i=0;i<10;i++){
      Array[i]=0;
    }
    for(int i=0;i<linea.length();i++){
      Array[linea[i]-48]+=1;
      //cout<<Array[i]<<endl;
    }
    int max= -100;
    for(int i=0;i<10;i++){
      //cout<<i<<" "<<Array[i]<<endl;
      if(Array[i]>max) {
        max= Array[i];
        //cout<<i<<"  "<<Array[i]<<endl;
      }
    }
    int indice;
    //cout<<"max vale "<<max<<endl;
    for(int i=0;i<10;i++){
      if(max==Array[i]) {
        indice= i;
      }
    }
    cout<<indice<<endl;
  }


	return 0;
}
