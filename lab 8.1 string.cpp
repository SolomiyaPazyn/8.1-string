#include <iostream>
#include <string>
using namespace std;

bool Search(string str)
{
    if (str.find(",-") != string::npos)
        return true;
    else
        return false;
}

string Replace(string& str)
{
    while (str.find(",-") != string::npos)
        str = str.replace(str.find(",-"), 2, "*");

    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    if (Search(str))
    {
        cout << "yes" << endl;
        cout << Replace(str);
    }
    else
        cout << "no" << endl;

    cout << endl;
    return 0;
}