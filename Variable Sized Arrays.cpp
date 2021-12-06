#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int k,o;
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> o;
            a[i].push_back(o);
        }
    }
    
    int r, s;
    for(int index = 1; index <= q; index++){
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}
