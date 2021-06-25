#include <vector>
#include <iostream>

using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int n) {
    int i = 0;
    while(i < n)
    {
        for(int j = 1; j < cells.size() -1; j++){
            if (((cells[j-1] == 1) && (cells[j+1] == 1)) || ((cells[j-1] == 0) && (cells[j+1] == 0))) {
                cells[j] = 1;
                // print_vector(cells);
                cout << "goodcase";
            }
            else
            {
                cells[j] = 0;
                // print_vector(cells);
                cout << "badcase";
            }
        }
        // print_vector(cells);
        i++;
    }
    return cells;
}

void print_vector(vector<int> vec){
    // This is 
    std::cout << "Printed Vector";
    for(auto it = vec.begin(); it != vec.end(); it++)
    {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}

int main(){
    int n = 9;
    while (n--){
        cout << n << '\n';
    }
    cout << "Final N value" << n;
}