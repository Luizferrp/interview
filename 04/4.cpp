#include <iostream>
#include <string>

int ConcatRemove(std::string base, std::string objetivo, int movimentos){
  int i;
  while (base[i] == objetivo[i]){
    i++;
  }
  return ((objetivo.length() - i) + (base.length() - i));
}

int main (int argc, char *argv[]) {
  std::string base, objetivo;
  int mov;
  std::cin >> base;
  std::cin >> objetivo;
  std::cin >> mov;
  std::cout << (mov >= ConcatRemove(base, objetivo, mov) ? "yes" : "no") << std::endl;
  return 0;
}
