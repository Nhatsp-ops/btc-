#include<bits/stdc++.h>
using namespace std;
void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
int i=0,j=n-1;
while(i<j){
    if(a[i]%2==0&&a[j]%2==0){
        swap(a[i],a[j]);
        i++;
        j--;
    }else if(a[i]%2==0 && a[j]%2!=0){j--;}
    else if(a[i]%2!=0 && a[j]%2==0){i++;}
    else if(a[i]%2!=0 && a[j]%2!=0){j--;i++;}
}
i=0,j=n-1;
while(i<j){
    if(a[i]%2!=0&&a[j]%2!=0){
        swap(a[i],a[j]);
        i++;
        j--;
    }else if(a[i]%2!=0 && a[j]%2==0){j--;}
    else if(a[i]%2==0 && a[j]%2!=0){i++;}
    else if(a[i]%2==0 && a[j]%2==0){j--;i++;}
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


































