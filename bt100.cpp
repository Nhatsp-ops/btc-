#include<bits/stdc++.h>
using namespace std;


int main(){
double a,b,c;
cin >> a >> b>>c;
double d =(b*b)-(4*a*c);
if(d < 0) cout << "vo nghiem";
if(d==0) cout << "x= "<< (-b)/(2*a);
if(d > 0){
    cout << "x1= "<< (-b+sqrt(d))/(2*a);
    cout << "x2= "<< (-b-sqrt(d))/(2*a);
}
    return 0;
}



























