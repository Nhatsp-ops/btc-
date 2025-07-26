#include<bits/stdc++.h>
using namespace std;
int inmang(int a[],int n){
 for(int i=0;i <n;i++){
        string s=to_string(a[i]);
        reverse(s.begin(),s.end());
        if(a[i]==stoi(s))
            return a[i];
}
return -1;
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













