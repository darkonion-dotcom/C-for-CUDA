// Stack vs Heap memory allocation & pointer safety
// 06/10/2026 D.o

#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    // Stack memory
    int32_t stack_val = 100;
    cout << "Stack value: " << stack_val << "\n";
    cout << "Stack address (&): " << &stack_val << "\n\n";

    // Heap memory (dynamic allocation)
    int32_t* heap_ptr = new int32_t{500};

    cout << "Heap initial value: " << *heap_ptr << "\n";
    cout << "Heap address: " << heap_ptr << "\n";

    // Modify value in heap memory
    *heap_ptr = *heap_ptr + 250;
    cout << "Updated heap value: " << *heap_ptr << "\n\n";

    // Free memory and prevent dangling pointer
    delete heap_ptr;
    heap_ptr = nullptr;

    if (heap_ptr == nullptr) {
        cout << "Memory freed and pointer set to nullptr.\n";
    }

    return 0;
}
