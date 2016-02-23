#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "CommandBase.h"
#include "Commands/AutoLowBar.h"
#include "Commands/AutoPortcullis.h"
#include "Commands/AutoChevaldeFrise.h"
#include "Commands/AutoRamparts.h"
#include "Commands/AutoMoat.h"
#include "Commands/AutoRockWall.h"
#include "Commands/AutoRoughTerrain.h"


class Robot: public IterativeRobot
{
private:
	//Don't know whether variables should be in public or private.
	Command *autonomousCommand;
	LiveWindow *lw;
	SendableChooser *chooser;

public:


	//	std::shared_ptr<NetworkTable> table;

	void RobotInit()
	{
		CommandBase::init();
		autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
		/*		table = NetworkTable::GetTable("EXAMPLENAME/myExampleName");

		while(true)
		{
			std::cout << "Areas: ";
			std::vector<double> arr =table->GetNumberArray("area", llvm::ArrayRef<double>());
			for (unsigned int i=0; i<arr.size(); i++)
			{
				std::cout << arr[i]<<" ";
			}
			std :: cout <<std::endl;
			Wait(1);
		}

		 */
		//		CommandBase::oi->getGyro()->SetSensitivity(.007);//.0125);
		//		CommandBase::oi->getGyro()->InitGyro();
		//		CommandBase::oi->getGyro()->Reset(); // Resets the gyro's heading

		CommandBase::oi->getGyro()->Calibrate();
		CommandBase::ballShooter->ServoDownPosition();

		//		stopPneumaticsCommand= new cmdStopPneumatics();

		//autonomousCommand= new AutoGrabTurnRZone();

		chooser= new SendableChooser();


		chooser->AddDefault("Low Bar (Set For)", new AutoLowBar());
		chooser->AddObject("Cheval de Frise (Set For)", new AutoChevaldeFrise());
		chooser->AddObject("Portcullis (Set For)", new AutoPortcullis());
		chooser->AddObject("Ramparts (Set Back)", new AutoRamparts());
		chooser->AddObject("Moat (Set Back)", new AutoMoat());
		chooser->AddObject("RockWall (Set Back)", new AutoRockWall());
		chooser->AddObject("Rough Terrain (Set Back)", new AutoRoughTerrain());


		SmartDashboard::PutData("Autonomous Modes", chooser);

	}

	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		CommandBase::ballShooter->ServoDownPosition();
		CommandBase::oi->getGyro()->Reset(); // Resets the gyro's heading
		autonomousCommand=(Command *)chooser-> GetSelected();

		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();

		CommandBase::ballShooter->ServoDownPosition();

	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);

