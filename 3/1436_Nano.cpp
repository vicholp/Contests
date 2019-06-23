#include<iostream>
#include<string>
#include <stack>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
  int N;
  cin>>N;
  for(int i=0;i<N;i++){
    int a;
    cin>>a;
    int Array[a];
    for(int j=0;j<a;j++){
      cin>>Array[j];
    }
    cout<<"Case "<<i+1<<": "<<Array[a/2]<<endl;
  }
  return 0;
}
