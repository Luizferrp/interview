#include <iostream>
#include <cassert>
//#include "4.o"
//
int ConcatRemove(std::string base, std::string objetivo, int movimentos){
  int i;
  while (base[i] == objetivo[i]){
    i++;
  }
  return ((objetivo.length() - i) + (base.length() - i));
}
void test() {
    // Teste 1
    assert(ConcatRemove("blablablabla", "blablabcde", 8) == 8);
    std::cout << "Todos os testes passaram!" << std::endl;
}

int main (int argc, char *argv[]) {  
  test();
  return 0;
}
