if(EXISTS "C:/Projects/Real-Roots-Polynomial-Engine/build/UnitTesting/ExtensiveTest[1]_tests.cmake")
  include("C:/Projects/Real-Roots-Polynomial-Engine/build/UnitTesting/ExtensiveTest[1]_tests.cmake")
else()
  add_test(ExtensiveTest_NOT_BUILT ExtensiveTest_NOT_BUILT)
endif()
