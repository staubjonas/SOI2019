#include "soi.h"
void main() {
    int a, b;
    cin >> a;
    cin >> b;
    if(a < b) {
        cout << "<";
    }
    else if(a == b) {
        cout << "=";
    }
    else {
        cout << ">";
    }
}