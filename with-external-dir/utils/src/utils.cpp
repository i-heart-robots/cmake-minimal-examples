#include "utils/utils.h"

#include <algorithm>
#include <regex>

namespace utils {

// ------------------------------------------------------------------------------------------------
std::string PascalCaseToSnakeCase(const std::string& pascal_case) {
  std::regex camelcase_regex("([a-z0-9])([A-Z])");
  std::string snake_case = std::regex_replace(pascal_case, camelcase_regex, "$1_$2");
  std::transform(snake_case.begin(), snake_case.end(), snake_case.begin(), ::tolower);
  return snake_case;
}

}  // namespace utils
