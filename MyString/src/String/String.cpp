//
// Created by 杨挹 on 2/12/23.
//

#include "String/String.h"
using namespace std;

String::String(const char* str) {
    if(str == nullptr) {
        // default constructor
        m_data = new char[1];
        m_data[0] = '\0';
        _size = 0;
    } else {
        // pass argument constructor
        size_t length = strlen(str);
        m_data = new char[length + 1];
        strcpy(m_data, str);
        _size = strlen(m_data);
    }

}

// copy constructor
String::String(const String& str) {
    size_t length = strlen(str.m_data);
    m_data = new char[length + 1];
    strcpy(m_data, str.m_data);
    _size = str._size;
}

// move constructor
String::String(String&& str) noexcept {
// 把other对象掏空用来填充this
m_data = nullptr;
m_data = str.m_data;
_size = str._size;
str.m_data = nullptr;
str._size = 0;
}

// de-constructor
String::~String() {
    delete[] m_data;
    m_data = nullptr;
    _size = 0;
}

size_t String::size() {
    return _size;
}

bool String::empty() {
    return _size <= 0;
}

String& String::operator=(const String &str) {
    if(this != &str) {
        delete[] m_data;
        size_t length = strlen(str.m_data);
        m_data = new char[length + 1];
        strcpy(m_data, str.m_data);
        _size = str._size;
    }

    return *this;
}

String& String::operator=(String&& str) noexcept {
    if(this != &str) {
        m_data = nullptr;
        m_data = str.m_data;
        _size = str._size;
        str.m_data = nullptr;
        str._size = 0;
    }

    return *this;
}

String String::operator+(const String& str) {
    String res;

    if(!m_data) {
        return str;
    } else if(!str.m_data) {
        return *this;
    } else {
        res.m_data = new char[_size + str._size];
        strcpy(res.m_data, m_data);
        strcat(res.m_data, str.m_data);
        res._size = _size + str._size;
    }

    return res;
}

bool String::operator==(const String& str) {
    return _size == str._size && 0 == strcmp(m_data, str.m_data);
}

char String::operator[](size_t index) {
    if(index >= _size) {
        throw out_of_range("Index out of rage");
    } else {
        return m_data[index];
    }
}

ostream& operator<<(ostream &output, const String& str) {
    if (nullptr == str.m_data) {
        const char* empty = "";
        output << empty;
    } else {
        output << str.m_data;
    }
    return output;
}
istream& operator>>(istream &input, String& str) {
    input >> str.m_data;
    return input;
}


