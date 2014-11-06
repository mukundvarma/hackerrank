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
    vector <string> lines;
    string input;
    while (lines.size() < ncases){
        cin >> input;
        lines.push_back(input);
    }
    for (int i = 0; i < lines.size(); i++) {
        int len = lines[i].size();
        int count = 0;
        for (int j = 0; j < (len)/2; j++) {
            count += abs(int(lines[i][j])-int(lines[i][len-j-1]));
        }
        cout << count << endl;
    }
    
    return 0;
}
