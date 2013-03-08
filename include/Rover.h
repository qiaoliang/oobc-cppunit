// Rover.h
#ifndef ROVER_H
#define ROVER_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue
const char FACING[]={'E','S','W','N'};

class Rover
{
public:
    Rover( int x, int y, char facing ){
        this->m_x = x;
        this->m_y = y;
        this->m_facing=facing;
        switch( facing ){
        case  'E':
            this->m_index = 0;
            break;
        case  'S':
            this->m_index = 1;
            break;
        case  'W':
            this->m_index = 2;
            break;
        case  'N':
            this->m_index = 3;
            break;
        }
    }

    std::string recieve(std::string commands);
    std::string toString() const;
private:
    int m_x,m_y;
    char m_facing;
    int m_index;
    void execute(char command);
    void moveforward();
};

#endif
