#include <vector>
#include <iostream>
#include <array>

// This is the typical stuff that I want to be able to do like Print vectors and arrays without having to deal with making these again

// Template function to print vectors
template<typename T>
void print_vector(vector<T> vec){
    // This is 
    std::cout << "Printed Vector";
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}

template<typename T>
void print_array(array<T> arr){
    //
    std::cout << "Printed Array";
    for (auto it = arr.begin(); it != arr.end(); it++){
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}