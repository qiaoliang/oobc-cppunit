#include "Rover.h"

RoverState Rover::getState(  ) const{
    return this->m_state;
}

std::string Rover::recieve( std::string commands ){
    const char* signals = commands.c_str(  );
    for( int i=0;i<commands.length(  );i++ ){
        this->m_state = this->m_state.execute(signals[ i ]);
    }
    return this->m_state.toString();
}
