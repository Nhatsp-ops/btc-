
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
map<int,int> v;
for(int i=0;i<n;i++){
    int x;
    cin >>x;
    v[x]++;
}
int min=INT_MAX;
int min1;
for(auto x:v){
    if(min > x.second)
        {min=x.second;
        min1=x.first;}
}
cout << min1;
    return 0;
}












