#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ncases;
    cin >> ncases;
    vector <int> ncuts;
    int input;
    while (cin >> input){
        ncuts.push_back(input);
    }
    for (int i = 0; i < ncuts.size(); i++){
        if (ncuts[i]%2 == 0)
            cout << ncuts[i]*ncuts[i]/4 << endl;
        else
            cout << (ncuts[i]+1)*(ncuts[i]-1)/4 << endl;
    }
    return 0;
}
