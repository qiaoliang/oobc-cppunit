#include "Commander.h"

#include <stdlib.h>
#include <iostream>
#include "Rover.h"
using namespace std;

string Commander::send(string location_string, string commands ){
    string locations[]={"","",""};
    const char* temp = location_string.c_str(  );
    int i = 0;
    int j = 0;
    while(temp[i]){
        if( temp[i]!=' '){
            locations[j].append(1,temp[i]);
        }else{
            j++;
        }
        i++;
    }
    Rover rover = Rover( atoi(locations[0].c_str()),atoi( locations[1].c_str( ) ),temp[i-1] );
    return rover.recieve(commands);
}
