
#include<bits/stdc++.h>
using namespace std;

int main(){
double a,b,c;
    cin >> a>>b>>c;
    if(a+b>c&&a+c>b&& b+c>a){
        if(a*a==b*b+c*c ||a*a+b*b==c*c||b*b==a*a+c*c) {cout<<"tam giac la tam giac vuong"<<endl;}
       else {if(a==b &&b==c){cout <<"tam giac la tam giac deu"<<endl;}
        else {if(a==b ||b==c||a==c) {cout <<"tam giac la tam giac can"<<endl;}
        else {if(a*a>b*b+c*c ||a*a+b*b<c*c||b*b>a*a+c*c) {cout <<"tam giac tu";}
        else {cout <<"tam giac nhon";}}
    }}}else cout<< "ko phai tam giac";
    return 0;
}




