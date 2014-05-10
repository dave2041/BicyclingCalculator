// GearFuncsDll.cpp : Defines the exported functions for the DLL application. 
//

#include "stdafx.h"
#include "GearFuncsDll.h"
#include <stdexcept>

using namespace std;

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

	double MyGearFuncs::MoDToSpeed(double a, double b)
    {
        return a - b;
    }

	double MyGearFuncs::SpeedToCadence(double a, double b)
    {
        return a * b;
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