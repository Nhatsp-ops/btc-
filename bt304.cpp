#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<int>& a,int m){
 unordered_map<int,int> mp;
 int sum_pre=0;
 mp[0]=-1;
 for(int i=0;i<n;i++){
    sum_pre+=a[i];
    if(mp.find(sum_pre-m)!=mp.end()){
        int start=mp[sum_pre-m]+1;
        int end1= i;
        for(int j=start;j<=end1;j++){
            cout << a[j]<<" ";
        }
        return;
    }
    if(mp.find(sum_pre)==mp.end()){
        mp[sum_pre]=i;
    }
 }
 cout << "ko co";
}
int main(){

int n,m;
    cin >> n>>m;
    vector<int> a(n);
nhapmang(a,n);
contang(n,a,m);
    return 0;}











































