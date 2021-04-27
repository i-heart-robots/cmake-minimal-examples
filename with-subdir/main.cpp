#include <iostream>
#include <string>
#include <vector>

#include "utils/utils.h"

int main(int argc, char* argv[]) {
  // Input a string.
  std::string input_str = "ThisIsTheTestInputString";

  // Convert it to snake_case, if applicable.
  std::cout << "Rx: " << input_str << " --> Tx: " << utils::PascalCaseToSnakeCase(input_str)
            << std::endl;

  return 0;
}
