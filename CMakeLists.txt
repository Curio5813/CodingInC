cmake_minimum_required(VERSION 3.28)
project(CodingInC C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lm")
set(CMAKE_C_STANDARD_LIBRARIES "${CMAKE_C_STANDARD_LIBRARIES} -lgmp")


add_executable(CodingInC
        beecrowd/as_moedas_de_robbie.c

)




