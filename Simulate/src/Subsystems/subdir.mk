################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/Chassis.cpp \
../src/Subsystems/LiftMechanism.cpp \
../src/Subsystems/Solen.cpp 

OBJS += \
./src/Subsystems/Chassis.o \
./src/Subsystems/LiftMechanism.o \
./src/Subsystems/Solen.o 

CPP_DEPS += \
./src/Subsystems/Chassis.d \
./src/Subsystems/LiftMechanism.d \
./src/Subsystems/Solen.d 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.o: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"\$\{workspace_loc:/2015_Roborioles}/src" -IC:\Users\Jurga/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.1 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


