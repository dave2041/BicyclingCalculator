// GearFuncsDll.cpp : Defines the exported functions for the DLL application. 
//

#include "stdafx.h"
#include "GearFuncsDll.h"
#include <stdexcept>

using namespace std;

#define M_PI       3.14159265358979323846
namespace GearFuncs
{
	double MyGearFuncs::GearsToMoD(double dWheelInInches, double dFrontChainRing, double dRearChainRing)
    {
		if (dFrontChainRing == 0 || dRearChainRing == 0)
        {
            throw invalid_argument("Cannot be zero!");
        }
        return dWheelInInches*(dFrontChainRing/dRearChainRing);
    }

	double MyGearFuncs::MoDToSpeed(double dMoD, double dCadence)
    {
        return (((dMoD*M_PI)*dCadence)*60)/63360;
    }

	double MyGearFuncs::SpeedToCadence(double dCadence, double dGearInches)
    {
        return ((dCadence*63660)/60)/(dGearInches*M_PI);
    }

    //double MyGearFuncs::Divide(double a, double b)
    //{
    //    if (b == 0)
    //    {
    //        throw invalid_argument("b cannot be zero!");
    //    }

    //    return a / b;
    //}
}