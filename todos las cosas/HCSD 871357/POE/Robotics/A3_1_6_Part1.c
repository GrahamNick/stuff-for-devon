#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor, port2,            leftMotor,     tmotorVex393_MC29, openLoop)
//pragma dawg

task main()
{
int motorCount;
motorCount=0;
	startMotor(leftMotor, -10);
	untilBump(limitSwitch);
	stopMotor(leftMotor);//Reset motor to start position
while(motorCount<20)
	{
		startMotor(leftMotor, 93);
		untilBump(limitSwitch);
		startMotor(leftMotor, -93);
		wait(.5);
		motorCount=motorCount+1;//oscelate 20 times
	}

}
