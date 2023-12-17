#include <iostream>
#include "greet.h"
int main(int argc, char** argv) {
  std::vector<std::string> arguments(argv + 1, argv + argc);
  std::string name;
  if (arguments.size() > 0) {
    name = arguments[0];
  } else {
    name = "Alan Turing";
  }
  std::cout << greet(name) << "\n";
  return 0;
}
