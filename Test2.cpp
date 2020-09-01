// Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned int val = 260;
    unsigned int mask = 1;
    bool start = false;
    int zeroBitsCount = 0;
    for (int i = 0; i < 32; ++i) {
        int tmpVal = val >> i;
        if (tmpVal & mask) {
            if (!start) {
                start = true;
                continue;
            }
            else {
                break;
            }
        }
        if (start) {
            ++zeroBitsCount;
        }
    }
    std::cout << zeroBitsCount;
}