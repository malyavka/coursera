/**
 * C++ program using the & operator to find the address of a variable in memory.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main() {
  int num = 7;

  std::cout << "Value: "   <<  num << std::endl;
  //& returns the memory address
  std::cout << "Address: " << &num << std::endl;

  return 0;
}

// Output:
// Value: 7
// Address: 0x7ffeef9eb858
