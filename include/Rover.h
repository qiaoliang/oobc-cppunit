// Rover.h
#ifndef ROVER_H
#define ROVER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue
class Rover
{
public:
    Rover( int x, int y, char facing ){
        this->m_x = x;
        this->m_y = y;
        this->m_facing=facing;
    }

    std::string recieve(std::string commands);
    std::string toString() const;
private:
    int m_x,m_y;
    char m_facing;
    void execute(char command);
};

#endif
