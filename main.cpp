#include <iostream>
#include "FuncA.h"

// Declaration for the HTTP server function from HTTP_Server.cpp
int CreateHTTPserver();

int main() {
    std::cout << "Starting HTTP Server on port 8081..." << std::endl;
    
    // Call the HTTP server function
    return CreateHTTPserver();
}