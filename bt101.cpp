#include<bits/stdc++.h>
using namespace std;

int main(){
    int nam,thang;
    cin >> thang>>nam;
    if(thang <1 && thang>12) return 0;
    bool nhuan;
    if(nam%4==0 && nam%100!=0) nhuan=1;
    else nhuan=0;
    if(thang==2){
        if(nhuan) cout <<"thang co 29 ngay";
        else cout <<"thang co 28 ngay";
        return 0;
    }
    switch(thang){
case 4:case 6:case 9: case 11:
    cout << "thang co 30 ngay";
default:
    cout <<"thang co 31 ngay";
    }
    return 0;
}



