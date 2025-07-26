#include<bits/stdc++.h>
using namespace std;

void nhapmang(vector<int>& a,int n){
for(int i=0;i<n;i++){
    cin >> a[i];
    }
}
void contang(int n,vector<int>& a){
for(int i=0;i<n;i++){
int j=i;
while(j+1<n&&a[j]<a[j+1]){
    j++;
}
if(j>i){
            for (int start = i; start <= j; start++) {
                for (int end = start+1; end <= j; end++) {
                    for (int k = start; k <= end; k++) {
                        cout << a[k] << " ";
                    }
                    cout << endl;
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
contang(n,a);
    return 0;}







































