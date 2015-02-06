// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "ClawSub.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/ClawCom.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

ClawSub::ClawSub() : Subsystem("ClawSub") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	shoulderTopLS = RobotMap::clawSubShoulderTopLS;
	shoulderBottomLS = RobotMap::clawSubShoulderBottomLS;
	elbowBottomLS = RobotMap::clawSubElbowBottomLS;
	elbowTopLS = RobotMap::clawSubElbowTopLS;
	clawElbow = RobotMap::clawSubClawElbow;
	clawShoulder = RobotMap::clawSubClawShoulder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void ClawSub::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new ClawCom());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void ClawSub::Run(Joystick* stick){

	if(stick->GetY()>0 && shoulderTopLS->Get()){
		clawShoulder->Set(stick->GetY());
	}else if(stick->GetY()<0 && shoulderBottomLS->Get())
		clawShoulder->Set(stick->GetY());
	else
		clawShoulder->Set(0);

	if(stick->GetX()>0 && elbowTopLS->Get())
		clawElbow->Set(stick->GetX());
	else if(stick->GetX()<0 && elbowBottomLS->Get())
		clawElbow->Set(stick->GetX());
	else
		clawElbow->Set(0);

}
