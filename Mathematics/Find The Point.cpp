#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, px, py, qx, qy, rx, ry, m, d;
    cin>>n;
    while(n--) {
        cin>>px>>py>>qx>>qy;
        rx = 2*qx - px;
        ry = 2*qy - py;
        cout<<rx<<" "<<ry<<endl;
    }
    return 0;
}
