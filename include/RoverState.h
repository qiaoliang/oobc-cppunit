// RoverState.h
#ifndef ROVERSTATE_H
#define ROVERSTATE_H

#include <string>
#include <stdexcept>
#include <cppunit/portability/Stream.h>    // or <iostream> if portability is not an issue

class RoverState
{
public:
RoverState( int x, int y, char facing )
    : m_x( x )
    , m_y( y )
    , m_facing( facing )
  {
  }

  int getX() const
  {
    return m_x;
  }

  int getY() const
  {
    return m_y;
  }

  char getFacing() const
  {
    return m_facing;
  }
  RoverState execute(){
    if(this->m_facing =='N')
        this->m_y+=1;
    if( this->m_facing == 'E')
        this->m_x+=1;
    if( this->m_facing =='W' )
        this->m_x-=1;
    return *this;
  }

  bool operator ==( const RoverState &other ) const
  {
    return m_x == other.m_x  &&  
           m_y == other.m_y &&
           m_facing == other.m_facing;
  }

  bool operator !=( const RoverState &other ) const
  {
    return !(*this == other);
  }

  
private:
  int m_x;
  int m_y;
  char m_facing;
};


// The function below could be prototyped as:
// inline std::ostream &operator <<( std::ostream &os, const Money &value )
// If you know that you will never compile on a platform without std::ostream
// (such as embedded vc++ 4.0; though even that platform you can use STLPort)
inline CPPUNIT_NS::OStream &operator <<( CPPUNIT_NS::OStream &os, const RoverState &value )
{
    return os << "RoverState(" << value.getX() << "," << value.getY(  ) << ","<<value.getFacing(  )<<")";
}


#endif
