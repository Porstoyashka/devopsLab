AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = program
program_SOURCES = main.cpp FuncA.cpp FuncA.h
program_CXXFLAGS = -fno-lto
EXTRA_DIST = Makefile.am
check_PROGRAMS = test_FuncA
test_FuncA_SOURCES = test_FuncA.cpp FuncA.cpp FuncA.h
