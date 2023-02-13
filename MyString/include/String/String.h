//
// Created by 杨挹 on 2/12/23.
//

#ifndef OOD_LEARNING_STRING_H
#define OOD_LEARNING_STRING_H

#include <iostream>
using namespace std;

class String {
public:
    String(const char* str = nullptr);
    String(const String& str);
    String(String&& str) noexcept;
    ~String();

    size_t size();
    bool   empty();

    String& operator=(const String& str);
    String& operator=(String&& str) noexcept;
    String  operator+(const String& str);
    bool    operator==(const String& str);
    char    operator[](size_t index);

    friend ostream& operator<<(ostream &output, const String& str);
    friend istream& operator>>(istream &input, String& str);

private:
    char* m_data;
    size_t _size;
};



#endif //OOD_LEARNING_STRING_H
