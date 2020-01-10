#include <iostream>
#include <string>
using namespace std;
string conpress(string text)
{
    int i=0;
    string s = ""; 
    while(i< text.size()){
        s = s + text[i];
        i+=3;

    }
    return s;

}

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    string k = conpress("CPECMU");
    string l = conpress("X");
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n" << k << "\n" << l;

}
