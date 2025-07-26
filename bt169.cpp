#include<bits/stdc++.h>
using namespace std;
int minodd(int a[],int n){
int min_val=INT_MAX;
bool found =false;
for(int i=0;i<n;i++){
    if(min_val >a[i]&& a[i]%2==1){
        min_val=a[i];
        found=true;
    }
}
if(found) return min_val;
else return -1;
}
int inmang(int a[],int n){
    int min_odd=minodd(a,n);
    if(min_odd==-1) return -1;
    int max_even=-1;
 for(int i=0;i <n;i++){
 if(a[i]%2==0 && a[i]<min_odd ){
        if(max_even<a[i])
     max_even=a[i];
 }
}return max_even;}
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










