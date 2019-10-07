/**
 * Simple C++ making use of std::cout and a `Cube` class.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

int main() {
    //uuic - This uiuc namespace is added to the Cube class in the h-file, by simply surrounding everything by the word namespace uiuc and curly braces
  uiuc::Cube c;
  c.setLength(2.4);
  std::cout << "Volume: " << c.getVolume() << std::endl;

  double surfaceArea = c.getSurfaceArea();
  std::cout << "Surface Area: " << surfaceArea << std::endl;

  return 0;
}
