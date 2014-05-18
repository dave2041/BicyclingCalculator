// BicycleCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GearFuncsDLL.h"


int _tmain(int argc, _TCHAR* argv[])
{
	double dGears, dFront, dRear;
	dGears = (622+(2*25))*0.0393700787;
	dFront = 48;
	dRear = 18;
	double dMoD = GearFuncs::MyGearFuncs::GearsToMoD(dGears,dFront,dRear);
	double dSpeed = GearFuncs::MyGearFuncs::MoDToSpeed(dMoD, 75);
	double dCadence = GearFuncs::MyGearFuncs::SpeedToCadence(29.5, dMoD);
	return 0;
}

