#include <iostream>
#include "BaseDriver.h"
#include "SimpleParser.h"

using namespace std;

class TutorialDriver: public BaseDriver
{
  public:
    virtual void init(float *angles);

    virtual string drive(string sensors);

    virtual void onShutdown();

    virtual void onRestart();
};