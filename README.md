# Google Test Sample

# Reference

* [Building GoogleTest and GoogleMock directly in a CMake project (2015)](https://crascit.com/2015/07/25/cmake-gtest/)
* [Google Testing: Example and CMake Integration (2016)](https://www.slothparadise.com/google-testing-example-and-cmake-integration/)

# Source Tree

```
./gt
├── CMakeLists.txt
├── CMakeLists.txt.in
├── README.md
├── add.cc
├── add.h
├── build
└── gt.cc
```

# Build

```
    git clone .... 
    cd gt    
    mkdir build
    cd build
    cmake ..
    make
    ./gt
```

# Run

edward-pro:build edward$ ./gt

Result:
```
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from AddTest
[ RUN      ] AddTest.TwoAndTwo
[       OK ] AddTest.TwoAndTwo (0 ms)
[ RUN      ] AddTest.TwoAndOne
[       OK ] AddTest.TwoAndOne (0 ms)
[----------] 2 tests from AddTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 2 tests.
```

make test or ctest

Result:
```
    Start 1: gt
1/1 Test #1: gt ...............................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
```

