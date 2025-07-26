#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
int i=0;
while(i<a.size()){
    if(a[i]%3==0){
            int x=a[i];
        a.erase(a.begin()+i);
        a.insert(a.begin(),x);
    }else{i++;}
}
for(auto x:a){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}
































