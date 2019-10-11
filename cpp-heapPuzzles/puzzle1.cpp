#include <iostream>

using std::cout;
using std::endl;
//no new -> stack memory
int main() {
  int  i =  2,  j =  4,  k =  8;
  int *p = &i, *q = &j, *r = &k;
 cout << i << j << k << *p << *q << *r << endl;
// 248248
  k = i;
  cout << i << j << k << *p << *q << *r << endl;
// 242242
 p = q;
  cout << i << j << k << *p << *q << *r << endl;
//242442
  *q = *r;
  cout << i << j << k << *p << *q << *r << endl;

  return 0;
}
