#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;        
    }
};

int main() {
    Solution solution;
    
    std::string haystack1 = "hello";
    std::string needle1 = "ll";
    int result1 = solution.strStr(haystack1, needle1);
    std::cout << "Result 1: " << result1 << std::endl;  
    std::string haystack2 = "aaaaa";
    std::string needle2 = "bba";
    int result2 = solution.strStr(haystack2, needle2);
    std::cout << "Result 2: " << result2 << std::endl;  
    
    return 0;
}
