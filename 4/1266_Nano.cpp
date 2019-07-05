#include <iostream>
#include<math.h>
using namespace std;

int main() {
  int N;
  while(cin>>N){
    if(N==0) break;

    int Array[N];
    int cont=0;
    int cont2=0;
    bool special=true;
    bool second=false;
    bool state=true;
    int subindice=0;

    for(int i=0;i<N;i++){
      cin>>Array[i];
      if(Array[0]==0) second=true;

      if(Array[i]==1) {
        special=false;
        if(second&&state){
          subindice=i+1;
          state=false;
        }
      }
    }


    int algo= (N+1)/2;
    if(special) cout<<algo<<endl;

    else{
      if(second){
        for(int i=subindice; i<N+subindice;i++){
          if(i<N){
            if(Array[i]==0) cont++;
            else{
            cont2+=cont/2;
            cont=0;
            }
          }
          else{
            //cout<<cont<<endl;
            if(Array[i-N]==0) cont++;
            else{
            cont2+=cont/2;
            cont=0;
            }
          }
        }
      }
      else{
        cont=0;
        cont2=0;
        for(int i=0;i<N+1;i++){
          if(Array[i]==0) cont++;
          else{
            cont2+=cont/2;
            cont=0;
          }
        }
      }
      cout<<cont2<<endl;
    }

  }


	return 0;
}
