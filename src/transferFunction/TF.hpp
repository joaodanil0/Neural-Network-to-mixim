#ifndef TF_H
#define TF_H
#include <cmath>
#include <iostream>

class TF {

private:
protected:
public:
    bool hardlim(double input);
    double hardlims(double input);
    double purelin(double input);
    double satlin(double input);
    double satlins(double input);
    double logsig(double input);
    double tansig(double input);
    double poslin(double input);
};
#endif
