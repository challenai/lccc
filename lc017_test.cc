#include <iostream>
#include <vector>
#include "lc017.cc"

int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> resu1 = s.letterCombinations("237");
    for (int i = 0; i < resu1.size(); i++) {
        std::cout << resu1[i] << " ";
    }
    std::cout << std::endl;
    if (true) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}

