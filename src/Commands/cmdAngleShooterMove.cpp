#include "cmdAngleShooterMove.h"

cmdAngleShooterMove::cmdAngleShooterMove(float AngleShooterSpeed)
{
	angleMoveSpeed=AngleShooterSpeed;
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shootAngle);

}

// Called just before this Command runs the first time
void cmdAngleShooterMove::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdAngleShooterMove::Execute()
{
	shootAngle->AngleShoot(angleMoveSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdAngleShooterMove::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdAngleShooterMove::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdAngleShooterMove::Interrupted()
{

}
