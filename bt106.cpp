#include <bits/stdc++.h>
using namespace std;
//bai nay do cach lam dai dong voi sai nen co tham khao chatgpt
string docChuSo(int d) {
    switch (d) {
        case 0: return "khong";
        case 1: return "mot";
        case 2: return "hai";
        case 3: return "ba";
        case 4: return "bon";
        case 5: return "nam";
        case 6: return "sau";
        case 7: return "bay";
        case 8: return "tam";
        case 9: return "chin";
        default: return "";
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen co 3 chu so: ";
    cin >> n;

    if (n < -999 || (n > -100 && n < 100) || n > 999) {
        cout << "So nhap khong hop le (phai co 3 chu so)." << endl;
        return 0;
    }

    if (n < 0) {
        cout << "am ";
        n = -n;
    }

    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    cout << docChuSo(tram) << " tram ";


    if (chuc == 0 && donvi != 0) {
        cout << "le ";
    } else if (chuc != 0) {
        if (chuc == 1)
            cout << "muoi ";
        else
            cout << docChuSo(chuc) << " muoi ";
    }

    if (donvi != 0) {
        if (donvi == 1 && chuc > 1)
            cout << "mot";
        else if (donvi == 5 && chuc != 0)
            cout << "lam";
        else
            cout << docChuSo(donvi);
    }

    cout << endl;
    return 0;
}

