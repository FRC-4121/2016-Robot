#include "AngleShooter.h"
#include "../RobotMap.h"
#include "../CommandBase.h"
#include "OI.h"


AngleShooter::AngleShooter() :
Subsystem("AngleShooter")
{
	AngleShooterSRXTalon = new TalonSRX(ANGLE_SHOOTER_SRX_TALON);
}
void AngleShooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

//Positive values bring shooter up, negative values to the ground


void AngleShooter:: AngleShoot(float AngleShooterSpeed)
{
	AngleShooterSRXTalon->Set(AngleShooterSpeed);
}


void AngleShooter:: AngleShootTrajectory(float AngleShooterDegrees)
{
	//float AngleShooterSpeed=0.25;
	//float gain=0.0006;

	while((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)<(AngleShooterDegrees-0.1) || ((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))>(AngleShooterDegrees+0.1))
	{
		if((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)<AngleShooterDegrees)
		{
		//	AngleShooterSpeed=(gain*((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))-(AngleShooterDegrees));
			AngleShooterSRXTalon->Set(-0.35);
		}
		else
		{
		//	AngleShooterSpeed=(gain*((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))-(AngleShooterDegrees));
			AngleShooterSRXTalon->Set(0.55);
		}
	}



		AngleShooterSRXTalon->Set(0);
}

void AngleShooter:: AngleShootTrajectoryShift(float AngleDegreeShift)
{
	//float AngleShooterDegreesCurrently=(((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072);
	float AngleShooterDestination=(((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072) + AngleDegreeShift;
	//float gain=0.003;
	//float AngleShooterShiftSpeed=0;


	while((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)<(AngleShooterDestination-0.1) || ((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))>(AngleShooterDestination+0.1))
	{
		//AngleShooterSRXTalon->Set(AngleShooterShiftSpeed);

// I don't think this is necessary as the speed to move such a small amount does not need to be and maybe should not be variable.
		if((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)<AngleShooterDestination)
		{
			//AngleShooterShiftSpeed=(gain*((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))-(AngleShooterDestination))-0.2;
			AngleShooterSRXTalon->Set(-0.35);
		}
		else
		{
			//AngleShooterShiftSpeed=(gain*((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072))-(AngleShooterDestination))+0.2;
			AngleShooterSRXTalon->Set(0.55);
		}

	}

	AngleShooterSRXTalon->Set(0);

}

void AngleShooter::PreventBackDrive()
{
	float AngleShooterBackDriveSpeed=0;
	float backDriveGain=0.000001;

		if((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)>=200)
		{
			//AngleShooterBackDriveSpeed= (backDriveGain*((((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072)-(167)))+0.08;
			AngleShooterBackDriveSpeed= 0.08;
		}
		else
		{
			AngleShooterSRXTalon->Set(0);
		}

		AngleShooterSRXTalon->Set(AngleShooterBackDriveSpeed);
}


void AngleShooter::StopAngleShooter()
{

	//stops the motion of the robot
	AngleShooterSRXTalon->Set(0);

}
