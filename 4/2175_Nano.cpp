#include <iostream>
using namespace std;

int main() {
  double a,b,c;
  cin>>a>>b>>c;

  //cout<<a<<" "<<b<<" "<<c<<" \n";
  if(a==b || a==c || b==c){
    cout<<"Empate"<<endl;
  }
  else if(a<b && a<c){
    cout<<"Otavio"<<endl;
    //cout<<a<<" "<<b<<endl;
  }
  else if(b<c && b<a){
    cout<<"Bruno"<<endl;
  }
  else if(c<b && c<a){
    cout<<"Ian"<<endl;
  }
	return 0;
}
