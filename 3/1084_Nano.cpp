#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;

  while(cin>>a>>b){
    if(a==0 && b==0) break;
    string linea;
    cin>>linea;
    int cont=0;
    bool state=false;
    vector<int> num;
    int n;
    int indice=0;
    bool emergencia=false;
    int aux;
    bool sobrecont=false;

    while(cont<b){
      //cout<<"que ondi perro?\n";
      for(int i=indice;i<linea.length();i++){
        if(linea[i]<linea[i+1]&& i<linea.length()-1){
          indice=i+1;
          n=linea[i+1]-48;
          state=true;
          cont++;
          //printf("entre asi que cont deberia subir y cont vale %d\n",cont);
          //printf("estamos en indice= %d\n",indice);
          //cout<<"Checkpoint y n= "<<n<<endl;
          //if(num.size()==0) cout<<"num está vacío"<<endl;
          //else cout<<"num NOOOO esta vacio\n";
          /*for(int i=0;i<num.size();i++){
            cout<<num[i]<<"\t";
          }
          cout<<endl;*/
          break;

        }
        else{
          //printf("pusheo con linea[i]= %d\n",linea[i]-48);
          num.push_back(linea[i]-48);
        }
        aux=i;
        //printf("cont vale %d   mientras que b vale %d\n",cont,b);


      }
      //cout<<"checkpoint cabro xd"<<endl;

      if(cont>=b) {
        //cout<<"salida por sobre cont\n";
        for(int i=indice;i<linea.length();i++){
          num.push_back(linea[i]-48);
        }
        break;
      }
      if(aux==linea.length()-1){
          //cout<<"salida por terminar el arreglo\n";
          sobrecont=true;
          break;
      }


      if(state&& num.size()!=0 && !emergencia){
        //cout<<"entre aca?"<<endl;
          for(int i=num.size()-1;i>=0;i--){
            if(num[i]<n){
              //printf("num[i] vale %d (i= %d) y n vale %d\n",num[i],i,n);
              num.pop_back();
              cont++;
              if(cont>=b){
                for(int j=indice;j<linea.length();j++){
                  num.push_back(linea[j]-48);
                }
                state=false;
                break;
              }
            }
            else{
              state=false;
              break;
            }
          }
          state=false;


      }
      //printf("cont vale %d\n",cont);
    }
    if(num.size()>a-b){
      for(int i=0;i<a-b;i++){
        cout<<num[i];
      }
    }
    else{
      for(int i=0;i<num.size();i++){
        cout<<num[i];
      }
    }

    cout<<endl;


  }







	return 0;
}
