#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int length = nums.size(), index = 0;
        while (index < length) {
            if (nums[index] == val) {
                nums[index] = nums[length - 1];
                --length;
            } else {
                ++index;
            }
        }
        return length;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums = {3, 2, 2, 3, 4, 5};
    int val = 3;

    int result = solution.removeElement(nums, val);

    std::cout << "New length of array after removing " << val << ": " << result << std::endl;

    std::cout << "Modified vector: ";
    for (int i = 0; i < result; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
