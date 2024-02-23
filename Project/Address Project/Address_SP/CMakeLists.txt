cmake_minimum_required(VERSION 3.27)
project(Address_SP C)

set(CMAKE_C_STANDARD 11)

add_executable(Address_SP main.c)

include_directories(/usr/include/mysql)
link_directories(/usr/lib/x86_64-linux-gnu)

target_link_libraries(Address_SP mysqlclient)