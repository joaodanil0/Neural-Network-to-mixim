#include <iostream>
#include <fstream>
#include "src/transferFunction/TF.hpp"
#include "src/neuron/Neuron.h"

/**
 * [array([[-7.92253225]]), array([[1.00388198]])]

   [array([3.96057157]), array([-0.00185772])]

   identity
 */
using namespace std;

int main(int argc, char const *argv[]) {

    TF tf;
    Neuron neuron1;
    Neuron neuron2;

    ofstream input;
    ofstream data;

    input.open("input.csv");
    data.open("data.csv");

    neuron1.setBias(3.96057157);
    neuron1.setWeight(-7.92253225);

    neuron2.setBias(-0.00185772);
    neuron2.setWeight(1.00388198);

    double i;
    for(i = 0; i <= 1; i = i + 0.01){

    	if(i < 1){
    		input << i*1000 << ",";
    		double a = neuron1.getResult(i, "logsig");
    		double b = neuron2.getResult(a, "purelin");
    		data << b*1000 << ",";
    	}
    	else{
    		input << i*1000;
    		double a = neuron1.getResult(i, "logsig");
    		double b = neuron2.getResult(a, "purelin");
    		data << b*1000;
    	}
    }

    input.close();
    data.close();

    cout << "Terminou" << endl;

    return 0;
}
