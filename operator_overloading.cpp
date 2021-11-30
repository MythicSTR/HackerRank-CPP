#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix {
    public:
        vector<vector<int>> a;  //2d vector

        //operator overloading
        Matrix operator +(Matrix c) {
            Matrix temp;
            for(int i = 0; i < a.size(); ++i) {
                temp.a.push_back(vector<int>());
                for(int j = 0; j < a[i].size(); ++j) {
                    temp.a[i].push_back(a[i][j] + c.a[i][j]);
                }
            }
            return temp;
        }
};

int main () {
   int cases, k;
   cin >> cases;

   for(k=0;k<cases;k++) {
        Matrix x;
        Matrix y;
        Matrix result;

        int n, m, i, j;    //n : no. of rows | m : no. of columns
        cin >> n >> m;

        //input for Matrix x
        for(i=0; i<n; i++) {
            vector<int> b;
            int num;
            for(j=0; j<m; j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }

        //input for Matrix y
        for(i=0; i<n; i++) {
            vector<int> b;
            int num;
            for(j=0; j<m; j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }

        result = x + y;

        //printing out the Matrix result
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }  
    return 0;
}
