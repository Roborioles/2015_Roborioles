################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/AutonomousCommand.cpp \
../src/Commands/DriveBot.cpp \
../src/Commands/LiftWithJoysticks.cpp \
../src/Commands/SolenCmd.cpp 

OBJS += \
./src/Commands/AutonomousCommand.o \
./src/Commands/DriveBot.o \
./src/Commands/LiftWithJoysticks.o \
./src/Commands/SolenCmd.o 

CPP_DEPS += \
./src/Commands/AutonomousCommand.d \
./src/Commands/DriveBot.d \
./src/Commands/LiftWithJoysticks.d \
./src/Commands/SolenCmd.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"\$\{workspace_loc:/2015_Roborioles}/src" -IC:\Users\Jurga/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-3.1 -I/usr/include/sdformat-2.2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


