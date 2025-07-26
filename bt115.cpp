
#include<bits/stdc++.h>
using namespace std;
struct hocsinh{
string hoten;
 float toan,van,tb;
};
int main(){
   hocsinh sv1;
   cout<<"nhap ho va ten: ";
   getline(cin,sv1.hoten);
   cout<<"nhap diem toan : ";
   cin >> sv1.toan;
   cout<<"nhap diem van : ";
   cin >> sv1.van;
   sv1.tb=(sv1.toan+sv1.van)/2.0;
   cout <<"diem tb cua ban la :" << sv1.tb;
    return 0;
}









