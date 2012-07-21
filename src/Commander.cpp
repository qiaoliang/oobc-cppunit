#include "Commander.h"

#include <stdlib.h>
#include <iostream>
#include "Rover.h"
using namespace std;

string Commander::send(string location_string, string commands ){
    string locations[]={"","",""};
    parseOriginLocationString(location_string,locations);
    Rover rover = Rover( atoi(locations[0].c_str()),atoi( locations[1].c_str( ) ),(locations[2].c_str( ))[0] );
    return rover.recieve(commands);
}
void Commander::parseOriginLocationString(std::string location,std::string* result){
    const char* temp = location.c_str(  );
    int i = 0;
    int j = 0;
    while(temp[i]){
        if( temp[i]!=' '){
            result[j].append(1,temp[i]);
        }else{
            j++;
        }
        i++;
    }
}
