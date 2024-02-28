cmake_minimum_required(VERSION 3.10)

project(tests)

add_subdirectory("googletest-1.14.0")
find_package(Threads)
include(GoogleTest)

link_libraries(engine)





add_executable(Test1 test1.cpp)
target_include_directories(Test1 PRIVATE ${PolyEngine_SOURCE_DIR})

target_link_libraries(Test1 engine GTest::gtest_main)
gtest_discover_tests(Test1) # this will discover and run the tests




add_executable(EngineTest engineTest.cpp)
target_include_directories(EngineTest PRIVATE ${PolyEngine_SOURCE_DIR})

target_link_libraries(EngineTest engine GTest::gtest_main)
gtest_discover_tests(EngineTest) # this will discover and run the tests
 


add_executable(ExtensiveTest extensiveTesting.cpp)
target_include_directories(ExtensiveTest PRIVATE ${PolyEngine_SOURCE_DIR})

target_link_libraries(ExtensiveTest engine GTest::gtest_main)
gtest_discover_tests(ExtensiveTest) # this will discover and run the tests
 


add_executable(ExecutedTest executedTest.cpp) 
target_include_directories(ExecutedTest PRIVATE ${PolyEngine_SOURCE_DIR})

target_link_libraries(ExecutedTest engine)
