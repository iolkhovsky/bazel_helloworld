cc_binary(
    name = "main-app",
    srcs = [
        "app.cpp", 
        "utils.cpp",
        "utils.h",
    ],
    deps = [
        "//my_lib:my-library",
    ],
    visibility = ["//app:__pkg__"],
)

cc_test(
  name = "hello_test",
  size = "small",
  srcs = ["tests/hello_test.cpp"],
  deps = ["@com_google_googletest//:gtest_main"],
)
