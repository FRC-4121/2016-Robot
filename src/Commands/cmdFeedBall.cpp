#include "cmdFeedBall.h"

cmdFeedBall::cmdFeedBall(float FeedingSpeed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(ballShooter);
	feedSpeed=FeedingSpeed;
}

// Called just before this Command runs the first time
void cmdFeedBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdFeedBall::Execute()
{
	ballShooter->Shoot(feedSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdFeedBall::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void cmdFeedBall::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdFeedBall::Interrupted()
{

}
