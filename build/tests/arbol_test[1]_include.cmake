if(EXISTS "/home/alfanath/progra2Esteban/proyect3Tree/arbol/build/tests/arbol_test[1]_tests.cmake")
  include("/home/alfanath/progra2Esteban/proyect3Tree/arbol/build/tests/arbol_test[1]_tests.cmake")
else()
  add_test(arbol_test_NOT_BUILT arbol_test_NOT_BUILT)
endif()