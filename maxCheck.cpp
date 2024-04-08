#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int maxCheck(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    cout << maxCheck(a, b) << '\n';
}
