/*
 * Neuron.cpp
 *
 *  Created on: Jun 27, 2018
 *      Author: joao
 */

#include "Neuron.h"

void Neuron::setBias(double bias){
	this->bias = bias;
}

void Neuron::setWeight(double weight){
	this->weights = weight;
}

double Neuron::getBias(){
	return this->bias;
}

double Neuron::getWeight(){
	return this->weights;
}

double Neuron::getResult(double inputs, string transferFunction){

	double n = inputs*this->weights + this->bias;

	if(transferFunction.compare("hardlim") == 0){
		return this->tf.hardlim(n);
	}
	else if(transferFunction.compare("hardlims") == 0){
		return this->tf.hardlims(n);
	}
	else if(transferFunction.compare("purelin") == 0){
		return this->tf.purelin(n);
	}
	else if(transferFunction.compare("satlin") == 0){
		return this->tf.satlin(n);
	}
	else if(transferFunction.compare("satlins") == 0){
		return this->tf.satlins(n);
	}
	else if(transferFunction.compare("logsig") == 0){
		return this->tf.logsig(n);
	}
	else if(transferFunction.compare("tansig") == 0){
		return this->tf.tansig(n);
	}
	else if(transferFunction.compare("poslin") == 0){
		return this->tf.poslin(n);
	}

	return 0;
}
