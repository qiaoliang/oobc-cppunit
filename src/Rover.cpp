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
void Rover::recieve( std::string commands ){
    for( int i=0;i<commands.length( );i++ ){
        this->execute();
    }
}
void Rover::execute(){
    this->m_y+=1;
}
