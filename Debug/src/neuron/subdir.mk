################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/neuron/Neuron.cpp 

OBJS += \
./src/neuron/Neuron.o 

CPP_DEPS += \
./src/neuron/Neuron.d 


# Each subdirectory must supply rules for building sources it contributes
src/neuron/%.o: ../src/neuron/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


