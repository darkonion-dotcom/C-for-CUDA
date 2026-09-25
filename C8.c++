//Arrays
//25/09/2026 D.o
#include <iostream>
#include <cstdint>
using namespace std;
int main(){
 constexpr int size {4}; //it calculates "size" with value 4 before the program is running
 int32_t temperature_sensors[size] {}; //32 bits array with size {sizz}. '{}' starts it with value 0.
 for (int i {0}; i < size; ++i) { // from i==0 to i<size with  pre-increase i=i+1
    cout<<"Enter the temperature for sensor "<<i<<"\n";
    cin>>temperature_sensors[i];
 }
 int32_t count {0};
 for (int i {0}; i<size; ++i){
    
    count +=temperature_sensors[i];
    
 }
 double average = static_cast<double>(count); //def average
  cout<<"\nAverage Temperature from the "<<size<<" Sensors is... "<<average;
  return 0;
}
