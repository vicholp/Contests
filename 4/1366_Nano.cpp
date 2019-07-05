#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while(cin>>n){
    if(n==0) break;

    int size[n];
    int num[n];
    int par[n];
    int sum=0;
    for(int i=0;i<n;i++){
      cin>>size[i]>>num[i];
      par[i]=num[i]/2;
      sum+=par[i];
    }
    sum/=2;
    cout<<sum<<endl;


  }

  return 0;
}
