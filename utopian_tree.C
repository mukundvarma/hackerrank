#include <iostream>
using namespace std;

int height(int n) {
    int h = 1;
    int cycle = 0;
    while (cycle < n) {
        if (cycle%2 == 0)
            h=h*2;
        else
            h++;
        cycle++;
    }
    return h;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
