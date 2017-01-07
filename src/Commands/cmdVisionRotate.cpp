#include "cmdVisionRotate.h"

cmdVisionRotate::cmdVisionRotate(float leftTurn, float rightTurn, float a)
{
	leftSpeedTurn=leftTurn;
	rightSpeedTurn=rightTurn;
	angle=a;

	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(tankChassis);
}

// Called just before this Command runs the first time
void cmdVisionRotate::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void cmdVisionRotate::Execute()
{
	oi->getGyro()->Reset();
	tankChassis->AutoDrive(leftSpeedTurn, rightSpeedTurn);
}

// Make this return true when this Command no longer needs to run execute()
bool cmdVisionRotate::IsFinished()
{
	bool retVal= false;
		if(angle==CommandBase::oi->getGyro()->GetAngle())
		{
			retVal=true;
		}
		else
		{
			retVal=false;
		}
		return retVal;
}

// Called once after isFinished returns true
void cmdVisionRotate::End()
{
	tankChassis->StopAutonomous();//stop all auto movement forward
	oi->getGyro()->Reset(); //reset the distance measured by encoder to zero


}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void cmdVisionRotate::Interrupted()
{

}
