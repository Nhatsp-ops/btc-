#include <bits/stdc++.h>
using namespace std;

void lietKeCacCap(int a[], int n) {
    if (n <= 2) {
        cout << -1;
        return;
    }


    set<int> check(a, a + n);
    if (check.size() != n) {
        cout << -1;
        return;
    }
sort(a,a+n);
int mindiff=INT_MAX;
pair<int,int> result;
for(int i=0;i<n-1;i++){
    int diff=abs(a[i+1]-a[i]);
    if(diff <mindiff){
        mindiff=diff;
        result={a[i],a[i+1]};
    }}
    for(int i=0;i<n-1;i++){
    int diff=abs(a[i+1]-a[i]);
    if(diff ==mindiff){
        cout << a[i] << " " << a[i+1]<<endl;;
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

    lietKeCacCap(a, n);

    return 0;
}


