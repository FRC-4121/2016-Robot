#ifndef AngleShooter_H
#define AngleShooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class AngleShooter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX *AngleShooterSRXTalon;
public:
	AngleShooter();
	void InitDefaultCommand();
	void AngleShoot(float AngleShooterSpeed);
	void AngleShootTrajectory(float AngleShooterDegrees);
	void AngleShootTrajectoryShift(float AngleDegreeShift);
	void PreventBackDrive();
	void StopAngleShooter();
};

#endif
