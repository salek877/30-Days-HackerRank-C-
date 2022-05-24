#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;


    for (i = 0; i < n; i++)
    {
        string str;
        cin >> str;


        for (j = 0; j < str.size(); j = j + 2)
            {
                cout << str[j];
            }


            cout << " ";


        for (j = 1; j < str.size(); j = j + 2)
            {
                cout << str[j];
            }


        cout << endl;

    }


    return 0;
}

