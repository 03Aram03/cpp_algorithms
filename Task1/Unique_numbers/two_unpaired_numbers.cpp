#include <iostream>
#include <vector>

std::pair<int,int> findTwoUnique(const std::vector<int>& nums) {
    int xor_all = 0;
    for(int num : nums)
        xor_all ^= num;

    // find a bit that is set in xor_all (rightmost set bit)
    int distinguishingBit = xor_all & (-xor_all);

    int num1 = 0, num2 = 0;
    for(int num : nums) {
        if(num & distinguishingBit)
            num1 ^= num; // group 1
        else
            num2 ^= num; // group 2
    }

    return {num1, num2};
}

int main() {
    std::vector<int> arr = {2,6,7,6,2,1,1,9,8,8};
    auto result = findTwoUnique(arr);
    std::cout << "The two unique numbers are: " << result.first << " and " << result.second << std::endl;
}
