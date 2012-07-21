#include "Rover.h"

RoverState Rover::getState(  ) const{
    return this->m_state;
}

std::string Rover::recieve( std::string commands ){
    for( int i=0;i<commands.length( );i++ ){
        this->m_state = this->m_state.execute();
    }
    return this->m_state.toString();
}
