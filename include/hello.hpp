//
// C++20 CLI Template
// Copyright (c) Phillip Cooper | https://moonhappy.io
//
// This code is licensed under MIT license (see LICENSE for details)
//

#include <string>

#ifndef MH_TEMPLATE_HELLO
#define MH_TEMPLATE_HELLO


consteval int add(int a, int b) { return a+b; }
constexpr int r = add(100, 300);

std::string hello_world();


#endif // MH_TEMPLATE_HELLO

