#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<double>& a,int n){
    int max=INT_MIN;
    int min=INT_MAX;
for(int i=0;i<n;i++){
    cin >> a[i];
    }
for(int i=0;i<n;i++){

    for(int j=i;j<n;j++){
        cout << "[";
        for(int k=i;k<=j;k++){
            cout << a[k];
            if(k!=j) cout << ",";
        }
        cout << "]\n";
    }
    }
}

int main(){
    int n,x,k;
    cin >> n;
vector<double> a(n);
nhapmang(a,n);
    return 0;}




































