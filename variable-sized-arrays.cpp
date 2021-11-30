#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, s, a, b, temp;
    vector<vector<int>> v1; //2d vector

    scanf("%d %d", &n, &q); //n : n-element array | q : no. of queries
    
    //adding the user given elements to the 2d vector
    for(int i = 0; i < n; ++i) {
        v1.push_back(vector<int>());
        scanf("%d", &s);
        for(int j = 0; j < s; ++j) {
            scanf("%d", &temp);
            v1[i].push_back(temp);
        }
    }

    //performing the queries
    for(int i = 0; i < q; ++i) {
        scanf("%d %d", &a, &b);
        printf("%d\n", v1[a][b]);
    }
     
    return 0;
}