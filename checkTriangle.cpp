#include <bits/stdc++.h>

using namespace std;

int a, b, c;

string checkTriangle(int a, int b, int c) {
    if (a >= b + c || b >= a + c || c >= a + b) return "Khong la tam giac";
    if (a == b && b == c) {
        return "Tam giac deu";
    } else if (a == b || b == c || c == a) {
        return "Tam giac can";
    } else {
        return "Tam giac thuong";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
    cout << checkTriangle(a, b, c) << '\n';
}
