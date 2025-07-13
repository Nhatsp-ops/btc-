
#include<bits/stdc++.h>
using namespace std;
double tinhs(int n){
double s=1.0;
for(int i=0;i<n;i++){
    s=1.0/(1.0+s);
}
return s;
}

int main(){
    int n;
    cin >> n;
        cout << tinhs(n);
    return 0;
}











