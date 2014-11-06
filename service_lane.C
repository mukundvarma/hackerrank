#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxvehiclesize(vector <int> widths, int entrypoint, int exitpoint) {
    int minwidth = 3;
    for (int i = entrypoint; i <= exitpoint; i++) {
        minwidth = min(minwidth, widths[i]);
    }
    return minwidth;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int length, ncases;
    vector <int> width, entrypoint, exitpoint;
    int input_w, input_entry, input_exit;
    cin >> length >> ncases; 
    while (width.size() < length && cin >> input_w)
        width.push_back(input_w);
    int casecount = 0;
    while (entrypoint.size() < ncases) {
        cin >> input_entry >> input_exit;
        entrypoint.push_back(input_entry);
        exitpoint.push_back(input_exit);
    }
    for (int i = 0; i < ncases; i++) {
        cout << maxvehiclesize(width, entrypoint[i], exitpoint[i]) << endl;    
    }
    
    return 0;
}
