#include <stdio.h>
#include "Commander.h"
int main(int argc, char** argv){
    Commander commander = Commander();
    commander.readInstructions();
    printf(commander.executeInstructions(  ).c_str(  ));
    return 0;
}
