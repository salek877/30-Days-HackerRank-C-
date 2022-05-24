#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double y;
    string z;
    cin >> x;
    cin >> y;
    cin.ignore();//If I do not use this then getline(cin, z) will not work;
    getline(cin, z);
    cout << i + x << endl;
    printf("%.1lf\n", d + y);
    cout << s + z << endl;
    return 0;
}

