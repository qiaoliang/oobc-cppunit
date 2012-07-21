#include "Rover.h"

int Rover::getX() const{
    return this->m_x;
}
int Rover::getY( ) const {
    return this->m_y;
}
char Rover::getFacing(  ) const{
    return this->m_facing;
}

RoverState Rover::getState(  ) const{
    return this->m_state;
}

void Rover::recieve( std::string commands ){
    for( int i=0;i<commands.length( );i++ ){
        this->m_state = this->m_state.execute();
    }
}
