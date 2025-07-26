#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n<5) return 0;
while(n!=1){
    if(n%5!=0) return 0;
    n/=5;
}
return 1;
}
int inmang(int a[],int n){
int max=0;
for(int i=0;i<n;i++){
    if(check(a[i])){
        if(max<a[i]) max=a[i];
    }
}
return max;
}
void nhapmang(int a[],int n){
for(int i=0;i<n;i++){
    cin >> a[i];
}
}

int main(){
    int n;
    cin >> n;
int a[n];
nhapmang(a,n);
cout <<inmang(a,n);
    return 0;
}






