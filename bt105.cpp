#include <bits/stdc++.h>
using namespace std;

int main() {
    //bai nay do sai switch case chua quen nen co nho chatgpt lam mau
    int n;
    cin >> n;
    string s = "";
    if (n < 0) s += "am ";
    string so = to_string(abs(n));

    for (int i = 0; i < so.size(); i++) {
        int digit = so[i] - '0';
        int pos = so.size() - i;

        switch (digit) {
            case 1:
                s += (pos == 3 ? "muoi " : "mot ");
                break;
            case 2:
                s += (pos == 2 ? "hai muoi " : "hai ");
                break;
            case 3:
                s += (pos == 2 ? "ba muoi " : "ba ");
                break;
            case 4:
                s += (pos == 2 ? "bon muoi " : "bon ");
                break;
            case 5:
                s += (pos == 2 ? "nam muoi " : "nam ");
                break;
            case 6:
                s += (pos == 2 ? "sau muoi " : "sau ");
                break;
            case 7:
                s += (pos == 2 ? "bay muoi " : "bay ");
                break;
            case 8:
                s += (pos == 2 ? "tam muoi " : "tam ");
                break;
            case 9:
                s += (pos == 2 ? "chin muoi " : "chin ");
                break;
            case 0:
                if (pos == 2) s += "muoi ";
                break;
        }
    }

    cout << s << endl;
    return 0;
}
