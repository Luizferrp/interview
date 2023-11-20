#include <iostream>
  
int main (int argc, char *argv[]) {
  std::string length;
  std::cin >> length;
  int i;
  //std::cout << true;
  while(length[i]){
    i++;
  }
  std::cout << "the string length is" << i << " elements\n";
  return 0;
}
