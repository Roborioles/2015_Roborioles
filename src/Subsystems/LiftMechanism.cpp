// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "LiftMechanism.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "../Commands/LiftWithJoysticks.h"
#include "../Commands/PickUpTote.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
LiftMechanism::LiftMechanism() : PIDSubsystem("LiftMechanism", 1.0, 0.0, 0.0) {
	SetAbsoluteTolerance(0.2);
	GetPIDController()->SetContinuous(false);
	LiveWindow::GetInstance()->AddActuator("LiftMechanism", "PIDSubsystem Controller", GetPIDController());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	liftMotor = RobotMap::liftMechanismLiftMotor;
	upperLimit = RobotMap::liftMechanismUpperLimit;
	lowerLimit = RobotMap::liftMechanismLowerLimit;
	liftPot = RobotMap::liftMechanismLiftPot;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.
}

double LiftMechanism::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;	
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
        return liftPot->Get();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
}

void LiftMechanism::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
	liftMotor->PIDWrite(output);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
}

void LiftMechanism::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new LiftWithJoysticks());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void LiftMechanism::SetSpeed() {

	double dir = Robot::oi->getGamePad()->GetThrottle() ;

	// check direction
	// if positive then check upperLimit
	// if negative then check lower limit

	// Note: upperLimit is really lower limit and lowerLimit is really upper limit
	// Note: positive motor values makes lift lower, negative values makes the lift raise

	if (dir>0 && upperLimit->Get())
	{
		liftMotor->Set(dir);
	}
	else if (dir<0 && lowerLimit->Get())
	{
		liftMotor->Set(dir);
	}
	else
	{
		liftMotor->Set(0);
	}
}

void LiftMechanism::Stop() {
	liftMotor -> Set(0);
}
