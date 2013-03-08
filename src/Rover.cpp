#include "Rover.h"

std::string Rover::toString() const {
    std::stringstream   pointx,pointy;
    pointx<<this->m_x;
    pointy<<this->m_y;
    return pointx.str()+" "+pointy.str( )+" "+std::string(1,m_facing);
}
std::string Rover::recieve( std::string commands ){
    const char* signals = commands.c_str(  );
    for( int i=0;i<commands.length(  );i++ ){
        execute(signals[ i ]);
    }
    return toString();
}
void Rover::execute(char command){
    switch( this->m_facing ){
    case  'N':
         if(command == 'L')
              this->m_facing = 'W';
         else 
              this->m_y+=1;
         break;
    case 'E':
        if( command == 'L' )
             this->m_facing = 'N';
        else
             this->m_x+=1;
        break;
    case 'W':
        if( command == 'L' )
             this->m_facing = 'S';
        else
             this->m_x-=1;
        break;
    case 'S':
        if( command == 'L' )
             this->m_facing = 'E';
        else
             this->m_y-=1;
        break;
    }
}
