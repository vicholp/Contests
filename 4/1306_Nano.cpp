#include <bits/stdc++.h>
using namespace std;

int main() {
  int r,n;
  int cont=0;
  while(cin>>r>>n){
    int answer;
    if(n==0 && r==0) break;

    cont++;
    bool state=true;
    if(n>=r){
      state=false;
      answer=0;
    }
    else{
      for(int i=1;i<=26;i++){
        if(n*(i+1)>=r){
          state=false;
          answer=i;
          break;
        }
      }
    }
    if(state){
      printf("Case %d: impossible\n",cont);
    }
    else{
      printf("Case %d: %d\n",cont,answer);
    }

  }

  return 0;
}
