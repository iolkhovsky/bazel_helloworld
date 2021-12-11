#pragma once

#include <ostream>
#include <vector>
#include <unordered_map>

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& container) {
    os << "[";
    for (const auto& c: container)
        os << c << ", ";
    os << "]" << std::endl;
    return os;
}

template<typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<T1, T2>& container) {
    os << "{";
    for (const auto& [k, v]: container)
        os << "(" << k << ": " << v << "), ";
    os << "}" << std::endl;
    return os;
}

namespace MyLib {

    class MyVectorWrap {
    public:
      using Container = std::vector<int>;
      using Iterator = Container::iterator;
      using ConstIterator = Container::const_iterator;
      MyVectorWrap() = default;
      MyVectorWrap(const std::vector<int>& v);
      Iterator begin();
      Iterator end();
      ConstIterator begin() const;
      ConstIterator end() const;
      int getMax() const;
    private:
      Container data;
    };

}