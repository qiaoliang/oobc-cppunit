#include "Rover.h"

RoverState Rover::getState(  ) const{
    return this->m_state;
}

void Rover::recieve( std::string commands ){
    for( int i=0;i<commands.length( );i++ ){
        this->m_state = this->m_state.execute();
    }
}
