// Lab 5: DateTest.cpp
#include <iostream>
using namespace std;

#include "Date.h" // include definitions of class Date

int main()
{
   const int MAXDAYS = 16;
   Date d( 12, 24, 2004 ); // instantiate object d of class Date
    int mo=12,day=24,year=2004;
   // output Date object d's value
   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {

      d.print(); // invokes function print
      d.change();
      /* Write call to nextDay */
   } // end for

   cout << endl;
} // end main
