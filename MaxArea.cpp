#include <vector>
#include <limits>
#include <iostream>

int maxArea(std::vector<int>& height) {
    int ptr1 = 0, ptr2 = height.size() - 1;
    int maxArea = 0;
    
    while(ptr1 < ptr2) {   
        int area = std::min(height[ptr1], height[ptr2]) * (ptr2 - ptr1);
        maxArea = std::max(area, maxArea);
        std::cout << "This max area = " << area <<'\n';
        std::cout << "The ptr1 element = " << height[ptr1] <<'\n';
        std::cout << "The ptr2 element = " << height[ptr2] << '\n';
        std::cout << '\n';
        if(height[ptr1] < height[ptr2]) 
            ptr1++;
        else 
            ptr2--;
    }
    return maxArea;
    }
int main()
{
    std::vector<int> h = {1,8,2,3,4,5,6,2,3,4};
    std::cout << "the passed in height = " << &h << '\n';
    int result = maxArea(h);
    std::cout << "The result = " << result << '\n';
}

class Solution {
public:
    const int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string intToRoman(int N) {
        string ans = "";
        for (int i = 0; N; i++)
            while (N >= val[i]) ans += rom[i], N -= val[i];
        return ans;
    }
};