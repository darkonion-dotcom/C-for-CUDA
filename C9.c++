//Pointers
//28/09.26 D.o
#include <iostream>
#include <cstdint>
using namespace std;
int32_t threads_block_a {128};
int32_t threads_block_b {256};
int main(){
    int32_t* dvram_a{&threads_block_a}; // pointer. "&" indicates that we want to see the memory adress of that var.
    int32_t* dvram_b{&threads_block_b};
    cout<<"Value of block a: "<<threads_block_a<<"\n";
    cout<<"Direction of block a: "<<dvram_a<<"\n";
    int32_t* ptr_threads {nullptr};// Nule pointer. Recomendation for safety.
    ptr_threads = &threads_block_a; //We assign the memory adress from threads_block_a to the null pointer ptr_threads.
    *ptr_threads += 32; // With "*" we indicate that we want to see the value of ptr_threads.
    cout<<"Value of block a after add 32 by pointer: "<<*ptr_threads<<"\n"; // Value of ptr_threads. [1]
    cout<<"Direction of block a: "<<ptr_threads<<"\n"; //memory adress of ptr_threads. [2]
    ptr_threads=&threads_block_b; //we assign the memory adress from threads_block_b to ptr threads.
     cout<<"Value of ptr_threads (block b): "<<*ptr_threads<<"\n"; //[1]
    cout<<"Direction of block a: "<<ptr_threads<<"\n";//[2]
    return 0;

}