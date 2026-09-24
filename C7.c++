//Call Stack
//24/09/2026 D.o

#include <iostream>
#include <cstdint>
using namespace std;
//Define function
void swapp(int16_t& a ,int16_t& b); //when we use '&' we indicate that we want to modify the var inside main() it doesnt creates a new memory block-- std::swap it exist so we use swapp
int main(){
int16_t threads_block_A {64}; //16bits
int16_t threads_block_B {128};//16 bits
cout<<"The value of A is... "<<static_cast<int>(threads_block_A)<<endl;//From 16 bits to 32 bits[1]
cout<<"The value of B is... "<<static_cast<int>(threads_block_B)<<endl;//[1]
swapp(threads_block_A, threads_block_B);
cout<<"The value of A is... "<<static_cast<int>(threads_block_A)<<endl;//[1]
cout<<"The value of B is... "<<static_cast<int>(threads_block_B)<<endl;//[1]


}
void swapp(int16_t& a,int16_t& b){
int16_t temp = a;//temp var
a=b;
b=temp;
}