#include "DataDisplay.h"
#include "../RobotMap.h"
#include "OI.h"
#include "../CommandBase.h"
#include <Commands/cmdDataDashboard.h>
#include "Subsystems/Shooter.h"

DataDisplay::DataDisplay() : Subsystem("DataDisplay")
{

}

void DataDisplay::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
		SetDefaultCommand(new cmdDataDashboard());
}

// Put methods for controlling this subsystem---------------------------------------------------------------
// here. Call these from Commands.--------------------------------------------------------------------------


void  DataDisplay::DisplayAll()
{
	float AngleShootEncoderDegrees=((CommandBase::oi->getAngleShootEncoder()->GetVoltage())/0.001)*0.072;

	bool CanShoot;

		if((CommandBase::ballShooter->getLoaderServo()->Get())>=0 && (CommandBase::ballShooter->getLoaderServo()->Get())<=0.08)
		{
			CanShoot=true;
		}
		else
		{
			CanShoot=false;
		}




	SmartDashboard::PutNumber("Left Encoder Speed:", CommandBase::oi->getLeftEncoder()->GetRate());
	SmartDashboard::PutNumber("Right Encoder Speed:", CommandBase::oi->getRightEncoder()->GetRate());
	SmartDashboard::PutNumber("Gyro: ", CommandBase::oi->getGyro()->GetAngle());
	SmartDashboard::PutNumber("Servo Position:", CommandBase::ballShooter->getLoaderServo()->Get());
	SmartDashboard::PutBoolean("Can I Shoot?:", CanShoot);
	SmartDashboard::PutNumber("Angle Encoder:", AngleShootEncoderDegrees);
	SmartDashboard::PutNumber("Angle Encoder Voltage:", (CommandBase::oi->getAngleShootEncoder()->GetVoltage()));


}
