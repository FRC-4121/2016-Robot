#ifndef cmdShooter_H
#define cmdShooter_H

#include "../CommandBase.h"
#include "WPILib.h"

class cmdShoot: public CommandBase
{
private:
	float shootSpeed;
public:
	cmdShoot(float ShootingSpeed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
