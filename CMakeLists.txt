cmake_minimum_required(VERSION 3.31)
project(First C)

set(CMAKE_C_STANDARD 11)

add_executable(First main.c
        IntAndFloat.c
        FindSmallNum.c
        Binary.c
        SwapArrays.c
        Malloc.c
        InputFunc.c
        ch2DynamicallyAllocatedArray.c
        Leak.c
        realloc.c)
