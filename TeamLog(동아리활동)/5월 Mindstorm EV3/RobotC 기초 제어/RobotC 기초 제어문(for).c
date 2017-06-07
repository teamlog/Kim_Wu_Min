task main()
{
	int i;

	for(i=0; i<10; i++)
		{
			motor[motorB] = 50;
			motor[motorC] = 50;
			wait1Msec(500);

			motor[motorB] = -50;
			motor[motorC] = -50;
			wait1Msec(500);
		}
}
