#include "my_lib.h"

#include <algorithm>
#include <limits>

namespace MyLib {

    MyVectorWrap::MyVectorWrap(const std::vector<int>& v) 
        : data(v) {
    }

    MyVectorWrap::Iterator MyVectorWrap::begin() { return data.begin(); }

    MyVectorWrap::Iterator MyVectorWrap::end() {return data.end(); }

    MyVectorWrap::ConstIterator MyVectorWrap::begin() const { return data.begin(); }

    MyVectorWrap::ConstIterator MyVectorWrap::end() const {return data.end(); }

    int MyVectorWrap::getMax() const {
        if (data.empty())
            return std::numeric_limits<int>::min();
        else
            return *std::max_element(data.begin(), data.end());
    }

};