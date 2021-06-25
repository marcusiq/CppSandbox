#include <vector>
#include <string>
#include <limits.h>
#include <iostream>

int lengthOfLongestSubstring(std::string s) {
    std::vector<int> chars(128);

    int left = 0;
    int right = 0;

    int res = 0;
    while (right < s.length()) {
        char r = s[right];
        std::cout << r << " === Character element\n";
        chars[r]++;
        std::cout << " Number of time of character = " << chars[r] << '\n';

        while (chars[r] > 1) {
            char l = s[left];
            std::cout << " Character element at the left side = " << l << '\n';
            chars[l]--;
            std::cout << " Number of elements of this character = " << chars[l] << '\n';
            left++;
        }

        res = std::max(res, right - left + 1);
        std::cout << res << " ::: Length of unique string here \n";
        std::cout << " Right = " << right << '\n';
        std::cout << " Left = " << left << '\n';

        right++;
    }
    return res;
}

int main(){
    std::string slip = "llelrs3rtl";
    int num = lengthOfLongestSubstring(slip);
    std::cout << num << '\n';
    std::string lip = "l34l";
    num = lengthOfLongestSubstring(lip);
    std::cout << num;
}