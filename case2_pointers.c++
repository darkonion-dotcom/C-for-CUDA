//Pointers
//30/09/2026 D.o
#include <iostream>
#include <cstdint>
using namespace std;
int main() {
    int32_t* passing_students = new int32_t{50}; // Allocate memory dynamically in the Heap (initialized to 50)
    cout << "Initial students : " << *passing_students << "\n";    
    *passing_students = *passing_students - 25;
    cout << "Students left: " << *passing_students << "\n";// Perform operations by dereferencing the pointer
    *passing_students = *passing_students - 15;
    cout << "Final students count: " << *passing_students << "\n";
    delete passing_students;  //  Destroys the variable and frees the RAM
    passing_students = nullptr;  //  the pointer to avoid pointing to garbage data
    return 0;
}
