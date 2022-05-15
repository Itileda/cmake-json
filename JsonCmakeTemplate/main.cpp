#include <iostream>
#include <iomanip>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
  cout << "Hello World!" << endl;
  json j = {{"pi", 3.14}, {"Ihor", 38}};

  std::cout << std::setw(4) << j << std::endl;
  return 0;
}
