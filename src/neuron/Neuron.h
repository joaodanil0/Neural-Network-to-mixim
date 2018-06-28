/*
 * Neuron.h
 *
 *  Created on: Jun 27, 2018
 *      Author: joao
 */

#ifndef SRC_NEURON_NEURON_H_
#define SRC_NEURON_NEURON_H_

#include "../transferFunction/TF.hpp"
#include <string>

using namespace std;

class Neuron {

private:

	double inputs = 0;
	double bias = 0;
	double weights = 0;

	TF tf;

protected:
public:


private:
protected:
public:
	void setBias(double bias);
	void setWeight(double weight);

	double getBias();
	double getWeight();

	double getResult(double inputs, string tranferFunction);

};

#endif /* SRC_NEURON_NEURON_H_ */
