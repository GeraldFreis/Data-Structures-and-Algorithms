#include <iostream>

int func(int n) {
    static int a;
    a++;
    std::cout << a << "\n";
  if (n < 1) return 0;
  return func(n/3) + func(n/2);
}

int main(){
    int b = func(0);
}