#ifndef REVERSE_H_INCLUDED
#define REVERSE_H_INCLUDED
#include <string>

void reverseStr(std::string& str) {
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
    }

#endif // REVERSE_H_INCLUDED
