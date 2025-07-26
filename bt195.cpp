#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
return a>b;
}
void lietKeCacCap(int a[], int n) {
    if (n <= 3) {
        cout << -1;
        return;
    }
unordered_set<int> v={a,a+n};
    if (v.size() != n) {
        cout << -1;
        return;
    }
    sort(a,a+n,cmp);
    set<vector<int>> b;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
            int key=a[i]-a[j];
            auto it =v.find(key);
            if(it!=v.end()){
                    vector<int> t={a[i],a[j],key};
                    sort(t.begin(),t.end());
                    if(b.find(t)==b.end()){
                cout << "[" << a[i]<<","<<a[j]<<","<<key<<"]"<<endl;
                b.insert(t);}
            }
        }
    }
}


void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
     cin >> a[i];
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    nhapMang(a, n);
lietKeCacCap(a,n);

    return 0;
}



