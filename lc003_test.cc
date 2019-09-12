#include <iostream>
#include "lc003.cc"

int main(int argc, char const *argv[])
{
    string str1 = "pwwkew";
    string str2 = "abcabcbb";
    string str3 = "bbbbbabbbbbbbb";
    string str4 = "bbbbbbbbbbbbbb";
    Solution s;
    if (s.lengthOfLongestSubstring(str1) == 3 && s.lengthOfLongestSubstring(str2) == 3 && s.lengthOfLongestSubstring(str3) == 2 && s.lengthOfLongestSubstring(str4) == 1) {
        std::cout << "pass" << std::endl;
    } else {
        std::cout << "not pass!" << std::endl;
    }
    return 0;
}
