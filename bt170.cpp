#include<bits/stdc++.h>
using namespace std;
bool snt(int n){
    if(n<2) return false;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return 0;
}
return 1;
}
int maxval(int a[],int n){
int Max_val=-1;
bool found =false;
for(int i=0;i<n;i++){
    if(Max_val <a[i]&& !snt(a[i])){
        Max_val=a[i];
        found=true;
    }
}
if(found) return Max_val;
else return -1;
}
int inmang(int a[],int n){
    int max_val =maxval(a,n);
    if(max_val==-1) return -1;
    int minsnt=INT_MAX;
    bool found=false;
 for(int i=0;i <n;i++){
 if( snt(a[i]) && a[i] > max_val ){
        if(minsnt > a[i] )
     minsnt=a[i];
     found=true;
 }
}
if(found)
return minsnt;
else return -1;}
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
cout << inmang(a,n);
    return 0;
}











