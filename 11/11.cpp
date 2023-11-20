#include <iostream>
  
void backtracking(std::string str, int i){
  if (str[i]){
    backtracking(str, i + 1);
  }
  std::cout << str[i];
}

int main (int argc, char *argv[]) {
  std::string str;
  std::cin >> str;
  backtracking(str, 0);
  std::cout << "\n";
  return 0;
}
