#include <iostream>
#include <string>

std::string READ(std::string input) {
  return input;
}

std::string EVAL(std::string input) {
  return input;
}

std::string PRINT(std::string input) {
  return input;
}

std::string rep(std::string input) {
  std::string read_output  = READ(input);
  std::string eval_output  = EVAL(read_output);
  std::string print_output = PRINT(eval_output);
  return print_output;
}

int main() {
  std::string user_input;
  while (true) {
    std::cout << "user> ";
    if (!std::getline(std::cin, user_input)) {
      std::cout << std::endl;
      break;
    }
    std::cout << rep(user_input) << std::endl;
  }
  return 0;
}