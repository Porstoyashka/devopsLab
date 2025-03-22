AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = program test_FuncA
program_SOURCES = main.cpp HTTP_Server.cpp FuncA.cpp
test_FuncA_SOURCES = test_FuncA.cpp FuncA.cpp

# Add necessary system libraries for socket operations
program_LDADD = -lpthread

# Adding check target to run tests
check_PROGRAMS = test_FuncA
TESTS = test_FuncA