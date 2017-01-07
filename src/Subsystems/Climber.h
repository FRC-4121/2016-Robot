#ifndef Climber_H
#define Climber_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Climber: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX *ClimberSRXTalon;
	DoubleSolenoid *climberSolenoid;

public:
	Climber();
	void InitDefaultCommand();
	void Climb(float climbSpeed);
	void ExtendPiston();
	void RetractPiston();
	void StopPiston();
	DoubleSolenoid::Value GetPistonPosition();
	void StopClimber();

};

#endif
