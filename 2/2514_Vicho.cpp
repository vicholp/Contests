#include <bits/stdc++.h>

using namespace std;



int main(){
	int lcm(int, int, int);
	
    int a,b,c;
    long long d;
    int LCM;

    while( cin >> d){
    	
	    cin >> a >> b >> c;

	    LCM = lcm(a,b,c);

	    cout <<  LCM - d << endl;
    }
    return 0;

}
int lcm(int x,int y, int z){
        long max,lcom, count, flag=0;
        if(x>=y&&x>=z)
                max=x;
        else if(y>=x&&y>=z)
                max=y;
        else if(z>=x&&z>=y)
                max=z;
        for(count=1;flag==0;count++)
        {
                lcom=max*count;
                if(lcom%x==0 && lcom%y==0 && lcom%z==0)
                {
                        flag=1;
                }
        }
        return lcom;
}