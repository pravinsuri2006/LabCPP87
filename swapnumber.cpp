#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;//3+4=7
    b = a - b;//7-4=3
    a = a - b;//7-3=4

    cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
commit
