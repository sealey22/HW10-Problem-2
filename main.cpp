#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  struct 
  {
  string month[5];
  double day[5];
  double year[5];
  float risehours[5];
  float risemins[5];
  double sethours[5];
  double setmins[5];
  } time;

  for(int i = 0; i < 5; i++){

    cout << "Month: " ;
    cin >> time.month[i];

    cout << "Day: ";
    cin >> time.day[i];

    cout << "Year: ";
    cin >> time.year[i];

    cout << "sunrise hours: ";
    cin >> time.risehours[i];

    cout << "sunrise mins: ";
    cin >> time.risemins[i];

    cout << "Sunset hour: ";
    cin >> time.sethours[i];

    cout << "Sunset mins: ";
    cin >> time.setmins[i];

    double totalhour = (time.sethours[i]) - (time.risehours[i]);

    double totalmins = (time.setmins[i]) - (time.risemins[i]);

   // cout << totalhour << " Hours" << " " << totalmins << " minutes" << endl << endl;

    
    
    cout << time.month[i] << " " << time.day[i] << " " << time.year[i] << " "<< totalhour << " Hours" << " " << totalmins << " minutes" << endl << endl;

    

    
    
    }

  
  
    return 0;
  }


/* test input                                        
June 22 2005 6:24 20:37
December 22 2005 7:24 17:30
November 2 2005 6:45 17:38
January 8 1992 7:45 18:46
  */

/* Test output
June 22 2005 14 hours 13 minutes
December 22 2005 10 hours 6 minutes
November 2 2005 10 hours 53 minutes
January 8 1992 11 hours 1 minutes
  */