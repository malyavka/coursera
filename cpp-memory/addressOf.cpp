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
//As mentioned, stack memory is the default memory for all variables in C++ to be placed. So, we haven't done anything special. We know our variable is going to be in stack memory. Stack memory is a specifically associated with the current function, and the lifecycle of this memory is the lifecycle of the function. So, if you clear an integer inside of the function, that integer exists as long as that function is still running. When the function finally ends or the function finally returns, then the stack memory for that function is going to be released back to the system.