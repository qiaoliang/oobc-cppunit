#include "Rover.h"

std::string Rover::toString() const {
    std::stringstream   pointx,pointy;
    pointx<<this->m_x;
    pointy<<this->m_y;
    return pointx.str()+" "+pointy.str( )+" "+std::string(1,FACING[this->m_index]);
}
std::string Rover::recieve( std::string commands ){
    const char* signals = commands.c_str(  );
    for( int i=0;i<commands.length(  );i++ ){
        execute(signals[ i ]);
    }
    return toString();
}
void Rover::execute(char command){
    switch( command ){
    case 'R':
        this->m_index=this->m_index<3?this->m_index+1:0;
        break;
    case 'L':
        this->m_index=this->m_index>0?this->m_index-1:3;
        break;
    case 'M':
        moveforward();
        break;
    }
}
void Rover::moveforward(){
    switch( this->m_index ){
    case 0:
        this->m_x+=1;
        break;
    case 1:
        this->m_y-=1;
        break;
    case 2:
        this->m_x-=1;
        break;
    case 3:
        this->m_y+=1;
        break;
    }
}
