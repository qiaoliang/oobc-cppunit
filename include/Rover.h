// Rover.h
#ifndef ROVER_H
#define ROVER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue

class Rover
{
public:
    Rover( int x, int y, char facing )
        : m_x( x )
        , m_y( y )
        , m_facing( facing )
    {
    }

    void recieve(std::string commands);
    void execute();
    int getX() const;
    int getY() const;
    char getFacing() const;
private:
    int m_x;
    int m_y;
    char m_facing;
};

#endif
