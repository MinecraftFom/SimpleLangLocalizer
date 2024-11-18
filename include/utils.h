#pragma once
typedef void*(utils_functions_t)(void*,...);
struct utils_t {
    void* utils_rules[];
    utils_functions_t* utils_functions[];
};

inline utils_functions_t* get_utils_functions(int index, struct utils_t* std) {
    return (std->utils_functions[index]);
}

