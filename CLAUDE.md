# liballen

C++26 header-only library. Learning project.

## Build

```bash
conan install . --output-folder=build --build=missing --profile=./conanprofile
CC=/opt/homebrew/opt/llvm@22/bin/clang CXX=/opt/homebrew/opt/llvm@22/bin/clang++ cmake --preset conan-release
cmake --build build
ctest --test-dir build
```

## Toolchain

- C++26, CMake 3.30+, Conan 2, LLVM/Clang 22
- GTest for tests
- clangd with strict clang-tidy
