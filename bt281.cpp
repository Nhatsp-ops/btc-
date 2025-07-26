#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
vector<int> res(n);
int left=0,right=n-1;
for(int i=n-1;i>=0;i--){
    if(a[i]%2!=0){
        res[right--]=a[i];
    }
}
for(int i=0;i<n;i++){
    if(a[i]%2==0&a[i]!=0){
        res[left++]=a[i];
    }
}
while(left<=right){
    res[left++]=0;
}
for(auto x:res){
    cout << x << " ";
}
}

int main(){
    int n,x,k;
    cin >> n;
vector<int> a(n);
nhapmang(a,n);
    return 0;}































