
task main()
{
	//Swing turn
	motor[motorB] = 50;
	motor[motorC] = 0;
	wait1Msec(1000);

	//Point turn
	motor[motorB] = 50;
	motor[motorC] = -50;
	wait1Msec(1000);

	//Curve turn
	motor[motorB] = 50;
	motor[motorC] = 20;
	wait1Msec(1000);
}
