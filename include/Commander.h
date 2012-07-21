// Commander.h
#ifndef COMMANDER_H
#define COMMANDER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue
class Commander
{
public:
    Commander()
    {
    }

    std::string send(std::string location, std::string commands);
private:
    void parseOriginLocationString(std::string location,std::string* result);
};

#endif
