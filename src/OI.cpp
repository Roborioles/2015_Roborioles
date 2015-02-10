// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ClawCom.h"
#include "Commands/DriveBot.h"
#include "Commands/LiftWithJoysticks.h"
#include "Commands/PickupNoodle.h"
#include "Commands/SolenCmd.h"
#include "Commands/autoCmdGroup.h"
#include "Commands/autoDriveForward.h"
#include "Commands/autoGrab.h"
#include "Commands/autoLift.h"
#include "Commands/autoPutDown.h"
#include "Commands/autoRelease.h"
#include "Commands/autoRotate90.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	gamePad = new Joystick(1);
	
	driveStick = new Joystick(0);
	
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("autoRelease", new autoRelease());

	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("DriveBot", new DriveBot());

	SmartDashboard::PutData("LiftWithJoysticks", new LiftWithJoysticks());

	SmartDashboard::PutData("SolenCmd", new SolenCmd());

	SmartDashboard::PutData("PickupNoodle", new PickupNoodle());

	SmartDashboard::PutData("ClawCom", new ClawCom());

	SmartDashboard::PutData("autoCmdGroup", new autoCmdGroup());

	SmartDashboard::PutData("autoLift", new autoLift());

	SmartDashboard::PutData("autoGrab", new autoGrab());

	SmartDashboard::PutData("autoPutDown", new autoPutDown());

	SmartDashboard::PutData("autoDriveForward", new autoDriveForward());

	SmartDashboard::PutData("autoRotate90", new autoRotate90());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getGamePad() {
	return gamePad;
}

Joystick* OI::getDriveStick() {
	return driveStick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Compressor* OI::getComp() {
	return Robot::c;
}
