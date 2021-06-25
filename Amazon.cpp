#include <vector>
#include <string>
#include <iostream>
#include <array>
#include <bitset>

using namespace std;
int main()
{
    uint16_t pchar = 0xb3;
    uint16_t lit = pchar<<1;

    bitset<8> x(pchar);
    bitset<8> z = x<<1;
    cout << x << '\n';
    cout << z << '\n';
    uint32_t newval = 0x0f0c0d0a;
    cout << newval << '\n';    
    bitset<32> y(newval);
    cout << y << '\n';
    uint8_t val = uint8_t(newval);
    bitset<8> m(val);
    cout << m << '\n';
    uint8_t* arr = new uint8_t[4];
    for(int j = 0; j < 4; j++){
        arr[j] = newval >> (8*j);
        bitset<8> n(arr[j]);
        cout << n << '\n';
    }

    uint32_t pint1 = 0x0000011;


    uint32_t pint[] = {0x00000011, 0x00000001, 0x00000010, 0x00000100, 0x00010000, 0x00100000, 0x01000000, 0x10000000, 0x00000101};

    cout << pchar << '\n';
    int i = 0;
    while(i<9){
        cout << pint[i] << '\n';
        i++;
    }
    
    return 0;
}