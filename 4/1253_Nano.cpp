#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  while(N--){
    string linea;
    int n;
    cin>>linea;
    char a;
    char aux[linea.length()];
    cin>>n;
    for(int i=0;i<linea.length();i++){
      if(linea[i]-n<'A'){
        aux[i]=linea[i]-n+26;
        a=linea[i]-n;
        //cout<<linea[i]-n+90<<" \t";
        //cout<<a<<" algo xd "<<linea[i]-n<<endl;

        //cout<<"i en if "<<i+1<<endl;
      }
      else if(linea[i]-n>'Z'){
        aux[i]=linea[i]-n-26;

        //cout<<"i en else if "<<i+1<<endl;
      }
      else{
        //cout<<"aca"<<endl;
        //cout<<"i en else "<<i+1<<endl;
        aux[i]=linea[i]-n;
      }
      //cout<<i+1<<"\t";
      //cout<<aux[i];
      if(aux[i]>'Z' || aux[i]<'A'){
        cout<<"error en i= "<<i+1<<endl;
      }
    }
    for(int i=0;i<linea.length();i++){

      cout<<aux[i];
    }
    cout<<endl;
  }



	return 0;
}
