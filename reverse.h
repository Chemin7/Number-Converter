#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED
#include <string>

std::string reverseStr(std::string str) {
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);

    return str;
    }

#endif // REVERSE_H_INCLUDED
