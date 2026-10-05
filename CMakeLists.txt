cmake_minimum_required(VERSION 3.31)
project(First C)

set(CMAKE_C_STANDARD 11)

add_executable(First main.c
        First/strConcat.c
        First/pointer1.c
        "Basic/Pointers_Exercises/Basic Pointer Declaration.c"
        "Basic/Pointers_Exercises/read a pointer.c"
        "Basic/Pointers_Exercises/two Pointers.c"
        "Basic/Struct in C/typedef struct.c"
        "Basic/Pointers_Exercises/Pointer Handling Demonstration.c"
        "Basic/Pointers_Exercises/Use of & and Operators.c"
        "Basic/Pointers_Exercises/Add Two Numbers with Pointers.c"
        "Basic/Pointers_Exercises/Add Numbers Using Call by Reference.c")
