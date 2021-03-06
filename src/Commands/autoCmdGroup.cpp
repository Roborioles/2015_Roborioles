// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "autoCmdGroup.h"
#include "autoGrab.h"
#include "autoRelease.h"
#include "autoLift.h"
#include "autoPutDown.h"
#include "autoDriveForward.h"
#include "autoRotate90.h"
#include "autoPutDownTote.h"

autoCmdGroup::autoCmdGroup() {
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	printf("--------GOT TO AUTO START----------\n");
	if(Robot::chassis->autoSwitch->Get()){
		printf("Auto1 Running - Lifting Yellow Tote");
		AddSequential(new autoLift(4,-1)); // 3 seconds at full speed
		AddSequential(new autoRotate90());
		if (Robot::chassis->autoSwitch2->Get()){
			printf("Going over scoring platform");
			AddSequential(new autoDriveForward(2, 0.36));
		}else {
			printf("Just going forward");
			AddSequential(new autoDriveForward(2, 0.3));
		}
		// AddSequential(new autoPutDown(2,0.74));
		AddSequential(new autoPutDownTote);
		AddSequential(new autoRelease());
	} else {
		printf("Auto2 Running - Lifting Recycle Bin");
		AddSequential(new autoRelease);
		AddSequential(new autoLift(2,-0.55));
		AddSequential(new autoGrab);
		AddSequential(new autoLift(2,-0.55));
		if (Robot::chassis->autoSwitch2->Get()){
			printf("Going over scoring platform");
			AddSequential(new autoDriveForward(2, 0.44));
		} else {
			printf("Just going forward");
			AddSequential(new autoDriveForward(2, 0.38)); // Changed from 0.40, which went long
		}
		AddSequential(new autoPutDown(3,0.55));
		AddSequential(new autoRelease());
	}
	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
