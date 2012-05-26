#ifndef _COPY_CAT_H_
#define _COPY_CAT_H_
#include <iostream>

class Copycat{
    private:
        bool trFlag;  //tape reader flag
        bool tpFlag; //tape puncher flag
        std::string RdTape(){
            return "Message from tape reader.";
        }
        std::string RdKbd(){
            return "Message from keyboard.";
        }
        void WrtPtr(std::string message){
            std::cout << "[Standard Printer] " << message << std::endl;
        }
        void WrtPunch(std::string message){
            std::cout << "[Tape Puncher]" << message << std::endl;
        }
    public:
        Copycat(){
            this->trFlag = false;
            this->tpFlag = false;
        }
        ~Copycat(){}
        void SetTrFlag(bool value){
            trFlag = value;
        }
        void SetTpFlag(bool value){
            tpFlag = value;
        }
        void Copy(){
            std::string message = trFlag ? RdTape() : RdKbd();
            tpFlag ? WrtPunch(message) : WrtPtr(message);
        }
};
#endif
