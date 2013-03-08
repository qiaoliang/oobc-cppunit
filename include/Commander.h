// Commander.h
#ifndef COMMANDER_H
#define COMMANDER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue
using namespace std;
class Commander
{
public:
    Commander()
    {
    }
    string executeInstructions(  );
    void readInstructions( );
private:
    void parseOriginLocationString(std::string location,std::string* result);
    string send(string location, string commands);
    string location;
    string commands;
};

#endif
