// taha burak sahin PJATK s26941

#pragma once
#include <iostream>
#include <regex>
#include <sstream>
#include "solver.h"
#include "altproj.h"
#include "game.h"
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;


template<typename TimeT> //template as measurement size (seconds, milliseconds)
struct measure
{
    template<typename F, typename ...Args>
    static typename TimeT::rep execution(F func, Args&&... args)
    {
        auto start = std::chrono::high_resolution_clock::now();
        func(std::forward<Args>(args)...); //forward arguments to function
        auto duration = std::chrono::duration_cast< TimeT>
                (std::chrono::high_resolution_clock::now() - start);
        return duration.count();
    }
};

//Unit test
void unitTest(int size, int nobs, int ntimes, bool verbose);