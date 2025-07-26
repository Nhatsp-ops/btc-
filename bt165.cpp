#include<bits/stdc++.h>
using namespace std;
int inmang(int a[],int n){
 for(int i=0;i <n;i++){
        string s=to_string(a[i]);
        if((s[0]-48)%2==1)
            return a[i];
}
return 0;
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














