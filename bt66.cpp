#include<bits/stdc++.h>
using namespace std;
void gptb4(double a,double b,double c){
    vector<double> v1;
set<double> v2;

double d =(b*b)-(4*a*c);
if(d<0) cout <<"vo nghiem";
else if(d==0)  v1.push_back((-b)/(2*a));
if(d > 0){
    v1.push_back((-b+sqrt(d))/(2*a));
    v1.push_back((-b-sqrt(d))/(2*a));
}
for(auto x:v1 ){
    if(x>=0){
        v2.insert(sqrt(x));
        v2.insert(-sqrt(x));
    }
}
if(v2.empty()){
    cout <<"vo nghiem";
    return;
}
int i=1;
for(auto x:v2){
    cout << "x"<<i<<"="<<x<<endl;;
    i++;
}
}

int main(){
double a,b,c;
cin >> a >> b>>c;
gptb4(a,b,c);
    return 0;
}



























