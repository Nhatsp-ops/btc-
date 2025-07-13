#include<bits/stdc++.h>
using namespace std;

int main(){
 const int n=200;
 long long tong=0;
 cout<<"cac phuong an la: \n";
 for(int c=0;c<=40;c++){
    int nsauc=n-5*c;
    for(int b=0;b<=nsauc/2;b++){
        int a=nsauc-2*b;
            cout << "a = " << setw(3) << a
                 << ", b = " << setw(3) << b
                 << ", c = " << setw(3) << c << '\n';
                 tong++;
    }
 }
 cout <<"tong cac phuong an la : "<<tong;
    return 0;
}
























