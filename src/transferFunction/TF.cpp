#include "TF.hpp"

bool TF::hardlim(double input){
    if(input < 0)
        return 0;
    else
        return 1;
}

double TF::hardlims(double input){
    if(input < 0)
        return -1;
    else
        return 1;
}

double TF::purelin(double input){
    return input;
}

double TF::satlin(double input){
    if(input < 0){
        return 0;
    }
    else if(input >= 0 and input <= 1){
        return input;
    }
    else{
        return 1;
    }
}

double TF::satlins(double input){
    if(input < -1){
        return -1;
    }
    else if(input >= -1 and input <= 1){
        return input;
    }
    else{
        return 1;
    }
}

double TF::logsig(double input){
    return 1/(1 + exp(-input));
}

double TF::tansig(double input){
    return (exp(input) - exp(-input))/(exp(input) + exp(-input));
}

double TF::poslin(double input){
    if(input < 0)
        return 0;
    else
        return input;
}
