#include "cmdLoadBallServo.h"

cmdLoadBallServo::cmdLoadBallServo()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
}

// Called just before this Command runs the first time
void cmdLoadBallServo::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdLoadBallServo::Execute()
{
	ballShooter->LoadBall();
}

// Make this return true when this Command no longer needs to run execute()
bool cmdLoadBallServo::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdLoadBallServo::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdLoadBallServo::Interrupted()
{

}
