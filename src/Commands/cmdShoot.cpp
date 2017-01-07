#include <Commands/cmdShoot.h>

cmdShoot::cmdShoot(float ShootingSpeed)
{

	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
	shootSpeed=ShootingSpeed;
}

// Called just before this Command runs the first time
void cmdShoot::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdShoot::Execute()
{
	ballShooter->Shoot(shootSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdShoot::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdShoot::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdShoot::Interrupted()
{

}
