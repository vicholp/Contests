#include <iostream>
#include <math.h>

using namespace std;

int p, b1,b2, e, a = 0;
int v = 0;
int main() {

	cin >> p >> b1 >> b2 >> e >> a;
  //Engano
  if(e == 1 && a == 0){
    cout  << "Jogador 1 ganha!" << endl;
    return 0;
  }
  if(e == 1 && a == 1){
    cout  << "Jogador 2 ganha!" << endl;
    return 0;
  }

  int s = b1+b2;
  int par = s%2;

  if(p == 1 && par == 0){ //par
    cout  << "Jogador 1 ganha!" << endl;
    return 0;
  }
  if(p == 1 && par == 1){
    cout  << "Jogador 2 ganha!" << endl;
    return 0;
  }

  if(p == 0 && par == 0){ //impar
    cout  << "Jogador 2 ganha!" << endl;
    return 0;
  }
  if(p == 0 && par == 1){
    cout  << "Jogador 1 ganha!" << endl;
    return 0;
  }
}
