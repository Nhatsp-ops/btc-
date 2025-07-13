
#include<bits/stdc++.h>
using namespace std;

int main(){
double a,b,c,f,d,e;
    cin >> a>>b>>c>>d>>e>>f;
   double D,Dx,Dy;
   D=a*e-d*b;
   Dx=c*e-f*b;
   Dy=a*f-d*c;
   if(D!=0){
    cout << "x= "<<Dx/D<<endl;
    cout << "y= "<<Dy/D<<endl;
    return 0;
   }
   if(D==0&& Dx==0 && Dy==0) cout << "vo so nghiem";
   if(D==0 && (Dx!=0 || Dy!=0)) cout << "vo nghiem";
    return 0;
}





