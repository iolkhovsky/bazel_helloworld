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
