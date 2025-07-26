#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int>& a,int n){
    int max=INT_MIN;
for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i]>max) max=a[i];
    }

for(int i=0;i<n;i++){
int j=i;
while(j+1<n&&a[j]<a[j+1]){
    j++;
}
if(j>i){
            for (int start = i; start <= j; start++) {
                for (int end = start+1; end <= j; end++) {
                        vector<int> v;
                    for (int k = start; k <= end; k++) {
                        v.push_back(a[k]);
                    }
                if(v[0]>0){
                for(auto x:v){
                    cout << x << " ";
                }
                    cout << endl;}
                }
            }
}
i=j;
}
}
int main(){
    vector<int> a(1000);
int n,x,k;
    cin >> n;
nhapmang(a,n);
   return 0;}









































