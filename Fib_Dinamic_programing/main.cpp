#include <iostream>

int fib(int n) {
  int fibonachi[n + 2];
  fibonachi[0] = 0;
  fibonachi[1] = 1;

  for(int i = 2; i <= n; i++) {
    fibonachi[i] = fibonachi[i - 1] + fibonachi[i - 2];
  }

  return fibonachi[n];
}

int main() {
  std::cout << fib(9) << std::endl; 
  return 0;
}
