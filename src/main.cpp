#include <prebuild.h>
#include "version.h"

// to be include here

#ifdef UNITTEST
#include <gtest/gtest.h>
#endif

/*
            DESCRIPTION
      //The program description is
      //to be placed here
      Description
*/

/*
            TO DO LIST
      //Things need to be done
      //Help yourself
      To be done
*/

/*
            FUNCTION
      //Keep track with function to work
      //Short please!

*/

using namespace std;

int main(int argc, char** argv) {
#ifndef UNITTEST
      if (argc == 2) {
            if (strcmp(argv[1], "--version") == 0) {
                  cout << "VERSION: ";
                  cout << VERSION_MAJOR << ".";
                  cout << VERSION_MINOR << ".";
                  cout << VERSION_FIX << endl;
                  cout << "Created by luibo" << endl;
                  return 1;
            }
      }
      clearscreen();

      // code of program

      return 0;
#else
      testing::InitGoogleTest(&argc, argv);
      int testrun = RUN_ALL_TESTS();
      pausescreen();
      return testrun;
#endif
}