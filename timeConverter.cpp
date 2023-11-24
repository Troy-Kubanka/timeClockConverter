/* 
Test to push file and edits to GitHub
 
basic program to convert total seconds
to days, hours, minutes, & seconds
*/

#include <iostream>
using namespace std;
int main ()
{
   int totalsec, days, hours, min, sec;

   cout << "Enter your total number of seconds: " << endl;
   cin >> totalsec;

   //Conversions
   days = totalsec/(60*60*24);
   hours = totalsec%(60*60*24)/(60*60);
   
   //Adjustements for minutes/seconds conversions
   totalsec %= (60*60);

   min = totalsec/60;
   totalsec %= 60; 
   sec = totalsec;

   //Results displayed on screen
   cout << "Your seconds correspond to: " << endl
    << days << " days" << endl
    << hours << " hours" << endl
    << min << " minutes" << endl
    << sec << " seconds" << endl;
   return 0;
}
