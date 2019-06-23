#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a,b;
  while(n--){
    cin>>a>>b;
    double algo= (a-2)/3.0;
    double alg= (b-2)/3.0;
    a/=3;
    b/=3;
    double aux1= algo-a;
    double aux2= alg-b;
    if(aux1>0){
      a+=+1;
    }
    if(aux2>0){
      b=alg+1;
    }
    cout<<a*b<<endl;
  }
	return 0;
}
