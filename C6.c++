//Practice Bitwise
//23/09/2026 D.o
//uint8_t == 8 bits<1 byte>
//Position Bit 7 Bit 6 Bit 5 Bit 4 Bit3 Bit2 Bit1 Bit0
//2^n      128   64    32    16    8    4    2    1
#include <iostream>
#include <cstdint>
using namespace std;
int main(){

int value {16};
int newvalue = (value>>2); //It moves the bit in 2 positions to right (16/4 = 4) at the same case we can use <<2 to move it left
cout<<"The value divided by 4 is ..."<<newvalue;
uint8_t bitmask {4}; // uint8_t creates a ram block with 8 bits to asign the number 4
uint8_t est {0b00000100};//When we use 0b we talking with the ram giving him the binary directly 

 if (bitmask & 0b00000100){
 cout<<"The third  block is enabled\n";
 }
 else {
    cout<<"The third block is disabled\n";
 }
 return 0 ;
}
