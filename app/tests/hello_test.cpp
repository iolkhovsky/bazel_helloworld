#include <gtest/gtest.h>

#include <numeric>
#include <vector>

TEST(HelloTest, Basic) {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int acc = 0;
    for (const int c: v)
        acc += c;
    auto sum = std::accumulate(v.begin(), v.end(), 0);
    EXPECT_EQ(sum, acc);
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7 * 6, 42);
}
