
#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<double>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
for(int mask=1;mask <(1<<n);mask++){
    for(int i=0;i<n;i++){
        if(mask &(1<<i)){
            cout << a[i]<<" ";
        }
    }
    cout << endl;
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<double> a(n);
nhapmang(a,n);
    return 0;}




































