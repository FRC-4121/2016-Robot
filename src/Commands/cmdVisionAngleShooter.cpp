#include "cmdVisionAngleShooter.h"

cmdVisionAngleShooter::cmdVisionAngleShooter(float angleSpeed, float angleShoot)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	angleShooterSpeed = angleSpeed;
	trajectoryAngle = angleShoot;

	Requires(shootAngle);
}

// Called just before this Command runs the first time
void cmdVisionAngleShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdVisionAngleShooter::Execute()
{
	//shootAngle->AngleShoot(angleShooterSpeed);

}

// Make this return true when this Command no longer needs to run execute()
bool cmdVisionAngleShooter::IsFinished()
{
	/*
		if(trajectoryAngle<=oi->getAngleShootEncoder()->GetVoltage())
		{
			retVal=true;
		}
		else
		{
			retVal=false;
		}
	*/
	return true;
}

// Called once after isFinished returns true
void cmdVisionAngleShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdVisionAngleShooter::Interrupted()
{

}
