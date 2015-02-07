// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "../OI.h"
#include "Solen.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/SolenCmd.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Solen::Solen() : Subsystem("Solen") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	c = RobotMap::solenc;
	solenoid = RobotMap::solenSolenoid;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Solen::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new SolenCmd());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void Solen::Compress(){
		Robot::oi->getComp()->SetClosedLoopControl(true);
}

/*void Solen::Stop(){
	while((Robot::oi->getJoystick()->GetRawButton(2))){
		Robot::oi->getComp()->SetClosedLoopControl(false);
	}
}*/

void Solen::Push(){
	if(Robot::oi->getGamePad()->GetRawButton(5)){
		Robot::solen->solenoid->Set(true);
		printf("What's up doc?");
	}
	else if (Robot::oi->getGamePad()->GetRawButton(7)){
		Robot::solen->solenoid->Set(false);
		printf("Wascawwy wabbit!");
	}
}



// Put methods for controlling this subsystem
// here. Call these from Commands.

