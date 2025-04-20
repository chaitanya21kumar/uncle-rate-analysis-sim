cmake_minimum_required(VERSION 3.10)
project(uncle-rate-analysis-sim)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(sim_driver
    src/main.cpp
    src/Node.cpp
    src/LatencyChannel.cpp   # ✅ Add this line
    src/ShareDAG.cpp
)
