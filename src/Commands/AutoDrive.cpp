#include "AutoDrive.h"

AutoDrive::AutoDrive(float d)
{
	distance=d;
	// Use Requires() here to declare subsystem dependencies
	Requires(tankChassis);

}

// Called just before this Command runs the first time
void AutoDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute()
{
	tankChassis->AutoDrive(0,0);//tells chassis to go forward at half speed
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive::IsFinished()
{
	bool retVal= false;
	if(distance<=oi->getLeftEncoder()->GetDistance())
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
void AutoDrive::End()
{

	tankChassis->StopAutonomous();//stop all auto movement forward
	oi->getLeftEncoder()->Reset(); //reset the distance measured by encoder to zero

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted()
{

}
