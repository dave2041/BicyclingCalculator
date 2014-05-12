// BicycleCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GearFuncsDLL.h"


int _tmain(int argc, _TCHAR* argv[])
{
	double dGears, dFront, dRear;
	dGears = (622+(2*25))*0.0393700787;
	dFront = 50;
	dRear = 20;
	double dMoD = GearFuncs::MyGearFuncs::GearsToMoD(dGears,dFront,dRear);
	double dSpeed = GearFuncs::MyGearFuncs::MoDToSpeed(dMoD, 75);
	double dCadence = GearFuncs::MyGearFuncs::SpeedToCadence(20, dMoD);
	return 0;
}

