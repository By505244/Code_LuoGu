#include <bits/stdc++.h>
using namespace std;
char c[9990][9990];
int d[9990][9990];
int main() {
    int a, b;
    cin>>a>>b;
    for (int a1 = 0; a1 < a; a1++) {
        for (int b1 = 0; b1 < b; b1++) {
            cin >> c[a1][b1];
            d[a1][b1] = 0;
        }
    }
    for (int a1 = 0; a1 < a; a1++) {
        for (int b1 = 0; b1 < a; b1++) {
            if (b1 + 1 <= b) {
                /****************************/
                if (c[a1][b1 + 1] == '*') {
                    d[a1][b1] = d[a1][b1] + 1;
                }
                /***********************************/
                if (a1 + 1 <= a) {
                    if (c[a1 + 1][b1 + 1] == '*') {
                        d[a1][b1] = d[a1][b1] + 1;
                    }
                }
                /********************************/
                if (a1 - 1 >= 0) {
                    if (c[a1 - 1][b1 + 1] == '*') {
                        d[a1][b1] = d[a1][b1] + 1;
                    }
                }
            }
            /**************************************************/
            if (b1 - 1 >= 0) {
                /**********************************/
                if (a1 - 1 >= 0) {
                    if (c[a1 - 1][b1 - 1] == '*') {
                        d[a1][b1] = d[a1][b1] + 1;
                    }
                }
                if (c[a1][b1 - 1] == '*') {
                    d[a1][b1] = d[a1][b1] + 1;
                }
                if (a1 + 1 <= a) {
                    if (c[a1 + 1][b1 - 1] == '*') {
                        d[a1][b1] = d[a1][b1] + 1;
                    }
                }
                /******************/
            }
            if (a1 + 1 <= a) {
                if (c[a1 + 1][b1] == '*') {
                    d[a1][b1] = d[a1][b1] + 1;
                }
            }
            if (a1 - 1 >= 0) {
                if (c[a1 - 1][b1] == '*') {
                    d[a1][b1] = d[a1][b1] + 1;
                }
            }
            /**************************************/
            if (c[a1][b1] == '*') {
                d[a1][b1] = 3333;
            }
        }
    }
    for (int a1 = 0; a1 < a; a1++) {
        for (int b1 = 0; b1 < b; b1++) {
            if (d[a1][b1] == 3333) {
                cout << "*";
            } else {
                cout << d[a1][b1];
            }
        }
        cout << endl;
    }
    return 0;
}