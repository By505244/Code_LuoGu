#include <iostream>
using namespace std;
int main() {
    long long a[10], c, b, d;
    c = 0;
    d = 0;
    for (; c < 10; c++) {
        cin >> a[c];
    }
    cin >> b;
    for (c=0; c <10; c ++) {
        if (b + 30 >= a[c])
            d++;
    }
    cout << d;
    return 0;
}
