// Rover.h
#ifndef ROVER_H
#define ROVER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue
#include "RoverState.h"
class Rover
{
public:
    Rover( int x, int y, char facing )
         : m_state( RoverState(x,y,facing))

    {
    }

    std::string recieve(std::string commands);
    RoverState getState() const;
private:
    RoverState m_state;
};

#endif
