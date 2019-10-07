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
// * exactly the large number!
// Address: 0x7ffeef9eb858


/* So, given the length of this number, that's 12 or 13 hexadecimal digits long, we know that this is a very high memory address, which is exactly what we expect of stack memory. Let's look at why this is a high memory address and understand exactly how the memory works in our computer. */
