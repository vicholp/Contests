#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    //cout << "compare(" << a << "," << b << ")" << endl;
    return (a.compare(b) < 0);
}

int main() {
  int n;
  cin>>n;
  vector<string> Nombres;
  string aux;
  int contB=0, contM=0;
  char BM;

  for(int i=0;i<n;i++){
    cin>>BM;
    getchar();
    if(BM=='+') contB++;
    else contM++;
    cin>>aux;
    Nombres.push_back(aux);
  }
  sort(Nombres.begin(),Nombres.end(),compare);

  for(int i=0;i<Nombres.size();i++){
    cout<<Nombres[i]<<endl;
  }
  printf("Se comportaram: %d | Nao se comportaram: %d\n",contB,contM);
	return 0;
}
