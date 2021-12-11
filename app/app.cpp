#include "utils.h"
#include "my_lib/my_lib.h"

#include <iostream>

int main(int argc, char** argv) {
    std::cout << Utils::getHeyMessage() << std::endl;

    std::vector<int> arr = {1, 2, 4, 5, 4, 3, 2, 1, -1};
    std::cout << "Some vector:\n" << arr;

    std::cout << "Once again:\n";
    MyLib::MyVectorWrap v(arr);
    for (const auto& c: v)
        std::cout << c << ",";
    std::cout << "\n";

    std::cout << "Max value: " << v.getMax() << "\n";

    std::unordered_map<std::string, int> map = {{"asd", 1}, {"fghgf", 2}, {"rfr", 3}};
    std::cout << "Some map:\n" << map;
}