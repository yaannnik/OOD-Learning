#include "String/String.h"
#include <iostream>

using namespace std;

int main() {
    String str1;
    cout << str1<< endl;
    cout << str1.size() << endl;

    cout << "----------" << endl;

    String str2("Hello");
    cout << str2<< endl;
    cout << str2.size() << endl;

    cout << "----------" << endl;

    String str3 = "World";
    cout << str3 << endl;

    cout << "----------" << endl;

    String str4 = str2 + str3;
    cout << str4 << endl;
    cout << str4.size() << endl;

    cout << "----------" << endl;

    String str5(move(str2));
    cout << str5<< endl;
    cout << str5.size() << endl;

    cout << "----------" << endl;

    String str6;
    str6 = str3;
    cout << str6 << endl;
    cout << str6.size() << endl;

    cout << "----------" << endl;

    String str7;
    str7 = move(str3);
    cout << str7<< endl;
    cout << str7.size() << endl;

    return 0;
}