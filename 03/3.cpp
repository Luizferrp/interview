#include <iostream>
int m3, m5, i;
int main (int argc, char *argv[]) {
  for (; i <= 100; i++){
    m3 = (i % 3 == 0)? 0 : 1; m5 = (i % 5 == 0)? 0 : 1;
    std::cout << ((m3 == 0) ? ((m5 == 0) ? "FooBar" : "Foo") : ((m5 == 0) ? ("Bar") : std::to_string(i).c_str())) << "\n";
  }
  return 0;
}
