#include "cmdTestServoDown.h"

cmdTestServoDown::cmdTestServoDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
}

// Called just before this Command runs the first time
void cmdTestServoDown::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdTestServoDown::Execute()
{
	ballShooter->ServoDown();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdTestServoDown::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdTestServoDown::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdTestServoDown::Interrupted()
{

}
