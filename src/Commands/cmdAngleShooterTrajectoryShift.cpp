#include "cmdAngleShooterTrajectoryShift.h"

cmdAngleShooterTrajectoryShift::cmdAngleShooterTrajectoryShift(float degrees)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shootAngle);
	AngleShiftDegrees=degrees;
}

// Called just before this Command runs the first time
void cmdAngleShooterTrajectoryShift::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdAngleShooterTrajectoryShift::Execute()
{
	shootAngle->AngleShootTrajectoryShift(AngleShiftDegrees);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAngleShooterTrajectoryShift::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdAngleShooterTrajectoryShift::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAngleShooterTrajectoryShift::Interrupted()
{

}
