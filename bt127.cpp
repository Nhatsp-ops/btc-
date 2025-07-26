#include<bits/stdc++.h>
using namespace std;

void quicksort(double a[],int l,int r){
int p=a[(l+r)/2];
int i=l,j=r;
while(i < j){
    while(p > a[i]) i++;
    while(p < a[j]) j--;
    if( i <= j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
if(i < r) quicksort(a,i,r);
if(j > l) quicksort(a,l,j);
}
int main(){
int n;
cin >> n;
double a[n];
for(int i=0;i < n;i++){
    cin >> a[i];
}
quicksort(a,0,n-1);
for(auto it:a) cout << it <<" ";
return 0;
}

