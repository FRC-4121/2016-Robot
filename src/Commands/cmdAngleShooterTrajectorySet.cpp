#include "cmdAngleShooterTrajectorySet.h"

cmdAngleShooterTrajectorySet::cmdAngleShooterTrajectorySet(float trajectoryAngle)
{
	angle=trajectoryAngle;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shootAngle);

}

// Called just before this Command runs the first time
void cmdAngleShooterTrajectorySet::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdAngleShooterTrajectorySet::Execute()
{
	shootAngle->AngleShootTrajectory(angle);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAngleShooterTrajectorySet::IsFinished()
{
	/*
		while(((CommandBase::oi->getAngleShootEncoder()->GetVoltage()/0.001)*0.072)<(angle-5) || (((CommandBase::oi->getAngleShootEncoder()->GetVoltage()/0.001)*0.072))>(angle+5))
		{
			return false;
		}
	*/
	return true;
}

// Called once after isFinished returns true
void cmdAngleShooterTrajectorySet::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAngleShooterTrajectorySet::Interrupted()
{

}
