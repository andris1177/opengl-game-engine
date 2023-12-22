#pragma once 
#include <iostream>
#include <stdlib.h>

class Log
{
private:
    int logLevel = 0;
    const char* message; 

public:
    static void Print(int logLevel, std::string message);
    static void Print(int logLevel, int message);
};