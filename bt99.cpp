
#include<bits/stdc++.h>
using namespace std;
bool ldb(double a,double b){
return a < b;
}
int main(){
double a,b,c;
cin >> a>>b>>c;
vector<double> v={a,b,c};
sort(v.begin(),v.end(),ldb);
for(auto x:v) cout << x <<" ";
    return 0;
}






