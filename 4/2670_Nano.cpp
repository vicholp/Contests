  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int prim, sec, terc;
    prim= b*2 + c*4;
    sec= a*2 + c*2;
    terc= a*4 + b*2;

    if(prim<=sec && prim<=terc){
      cout<<prim;
    }
    else if(sec<= prim && sec <= terc){
      cout<<sec;
    }
    else{
      cout<<terc;
    }
    cout<<endl;



    return 0;
  }
