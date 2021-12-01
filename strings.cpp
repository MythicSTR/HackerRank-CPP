#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c;
    
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    
    c = a + b;
    cout << c << endl;
    
    a[0] = b[0];
    b[0] = c[0];
    cout << a << " " << b << endl;
    
    return 0;
}