#include <iostream>
int m3, m5;
int main (int argc, char *argv[]) {
  for (int i = 0; i <= 100; i++){
    std::cout << ((m3 == 0) ? ((m5 == 0) ? "FooBar" : "Foo") : ((m5 == 0) ? ("Bar") : i)) << "\n";
  }
  return 0;
}
