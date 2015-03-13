#include "autoPutDownTote.h"

autoPutDownTote::autoPutDownTote()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::liftMechanism);
}

// Called just before this Command runs the first time
void autoPutDownTote::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void autoPutDownTote::Execute()
{
	if (Robot::liftMechanism->upperLimit->Get()) {
		Robot::liftMechanism->liftMotor->Set(0.75);
	} else {
		End();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool autoPutDownTote::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void autoPutDownTote::End()
{
	Robot::liftMechanism->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void autoPutDownTote::Interrupted()
{
	End();
}
