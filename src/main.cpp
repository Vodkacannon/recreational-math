#include <iostream>
#include <vector>

template <typename T> T sum(std::vector<T> numbers) {
  T my_sum = 0;

  for (auto number : numbers) {
    my_sum += number;
  }

  return my_sum;
}

std::string reverse_str(std::string my_str) {
  auto down = my_str.length();
  size_t up = 0;

  while (up < down && down > 0) {
    up++;
    down--;

    std::swap(my_str[up], my_str[down]);
  }

  return my_str;
}

bool is_palindrome(uint64_t integer) {
  return std::to_string(integer) == reverse_str(std::to_string(integer));  
}

uint64_t sum_palindromes(uint64_t nth_index) {
  std::vector<uint64_t> palindromes;
  uint64_t curr_index = 0;
  uint64_t number_to_check = 0;
  
  while (curr_index < nth_index) {
    if (is_palindrome(number_to_check)) {
      palindromes.push_back(number_to_check);
      curr_index++;
    }
  }
  
  return sum(palindromes);
}

int main() {
  return 0;
}
