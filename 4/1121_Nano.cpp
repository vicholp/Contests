#include <bits/stdc++.h>
using namespace std;
//0 es arriba 1 es izquierda 2 es abajo y 3 es derecha
//girar a la izquierda es +1
int direc(char a){

  switch(a){
    case 'N': return 0; break;
    case 'S': return 2; break;
    case 'L': return 3; break;
    case 'O': return 1; break;

    case 'D': return 4; break;
    case 'E': return 5; break;
    case 'F': return 6; break;
  }

}



int main() {
  int N,M, S;
  int posX,posY;
  while(cin>>N>>M>>S){
    if(N==0 && M==0 && S==0) break;

    int dir;

    //cout<<N<<" "<<M<<endl;
    char Mat[N][M];
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
        cin>>Mat[i][j];
        if(Mat[i][j]== 'N'||Mat[i][j]== 'S'||Mat[i][j]== 'L'||Mat[i][j]== 'O'){
          dir= direc(Mat[i][j]);
          posX=j;
          posY=i;
        }

      }
    }
    char instruct[S];
    for(int i=0;i<S;i++){
      cin>>instruct[i];
    }

    //cout<<"posicion inicial es: "<<posX<<","<<posY<<endl;
    int cont=0;
    for(int i=0;i<S;i++){
      if(instruct[i]=='F'){
        //cout<<"entre en avanzar"<<endl;
        //cout<<dir<<" "<<posX<<","<<posY<<endl;
        if(dir==0 && posY>0 && Mat[posY-1][posX]!='#'){
          posY-=1;
          //cout<<Mat[posX][posY];
          if(Mat[posY][posX]=='*') {
            cont++;
            Mat[posY][posX]='.';
          }
        }
        else if(dir==1 && posX>0 && Mat[posY][posX-1]!='#'){
          //cout<<"entre aca"<<endl;
          posX-=1;
          if(Mat[posY][posX]=='*'){
            cont++;
            Mat[posY][posX]='.';
          }
        }
        else if(dir==2 && posY<N-1 && Mat[posY+1][posX]!='#'){
          //cout<<"o aca?"<<endl;
          posY+=1;
          if(Mat[posY][posX]=='*'){
            cont++;
            Mat[posY][posX]='.';
          }
        }
        else if(dir==3 && posX<M-1 && Mat[posY][posX+1]!='#'){
          posX+=1;
          //cout<<"si quiera entre :(?"<<endl;
          if(Mat[posY][posX]=='*'){
            Mat[posY][posX]='.';
            cont++;
          }
        }

      }
      else if(instruct[i]=='D'){
        dir--;
        if(dir<0){
          dir+=4;
        }

      }
      else if(instruct[i]=='E'){
        dir++;
        if(dir>3){
          dir-=4;
        }
      }
    }


    cout<<cont<<endl;


  }

  return 0;
}
