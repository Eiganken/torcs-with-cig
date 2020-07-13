#include "TutorialDriver.h"

void TutorialDriver::init(float *angles)
{
  cout << "debug : [INIT]" << endl;
}

void TutorialDriver::onShutdown()
{
  cout << "debug : [SHUT DOWN]" << endl;
}

void TutorialDriver::onRestart()
{
  cout << "debug : [RESTART]" << endl;
}

string TutorialDriver::drive(string sensors)
{
  cout << "debug : [DRIVE]" << endl;

  string str = "";

  str += "(accel 1)";
  str += "(break 0)";
  str += "(clutch 0)";
  str += "(gear 4)";
  str += "(steering 0)";
  str += "(focus 0)";
  str += "(meta 0)";

  return str;
}