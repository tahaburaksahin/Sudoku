// taha burak sahin PJATK s26941


#include <iostream>
#include <regex>
#include <sstream>
#include "solver.h"
#include "altproj.h"
#include "game.h"
#include "test.h"
#include <ctime>
#include <ratio>
#include <chrono>

using namespace std;

void unitTest(int size, int nobs, int ntimes, bool verbose){

    int total = 0;
    int total2 = 0;

    //generate puzzle and solve ntimes
    for (int i = 0; i < ntimes; ++i)
    {
        Board board = generatePuzzle(size,nobs);


        auto t = measure<std::chrono::nanoseconds>::execution(solve,
                                                              board, 0, 0);
        auto t2 = measure<std::chrono::nanoseconds>::execution(DR, board);

        //Print output if verbose
        if (verbose)
            cout << "Backtrace solved in " << t << " ns." << \
        " Random projections solved in " << t2 << " ns." << endl;

        total += t;
        total2 += t2;
    }

    cout << "Average time for Backtrace: " << total/ntimes << endl;
    cout << "Average time for Random projections: " << total2/ntimes << endl;

}