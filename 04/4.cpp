#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string ConcatRemove(string& s, string& t, int k){
  int n = s.size(), m = t.size();
  int lo = 0, up = min(n, m), mid = (up+lo)>>1;
  while(lo < mid){
    if(s[mid] == t[mid]) lo = mid;
    else up = mid;
    mid = (up+lo)>>1;
  }
  return (n + m - 2*up <= k and ((n+m)%2 == k%2 or (n+m <= k))) ? "yes": "no";
}

int main (int argc, char *argv[]) {
  std::string base, objetivo;
  int mov;
  std::getline(std::cin, base);
  std::getline(std::cin, objetivo);
  std::cin >> mov;
  std::cout << ConcatRemove(base, objetivo, mov) << std::endl;
  return 0;
}
