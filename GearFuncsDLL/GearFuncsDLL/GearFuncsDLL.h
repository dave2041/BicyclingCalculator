// GearFuncsDll.h

#ifdef GEARFUNCSDLL_EXPORTS
#define GEARFUNCSDLL_API __declspec(dllexport) 
#else
#define GEARFUNCSDLL_API __declspec(dllimport) 
#endif

namespace GearFuncs
{
    // This class is exported from the MathFuncsDll.dll
    class MyGearFuncs
    {
    public: 
        static GEARFUNCSDLL_API double GearsToMoD(double dWheelInInches, double dFrontChainRing, double dRearChainRing); 

        static GEARFUNCSDLL_API double MoDToSpeed(double dMoD, double dCadence); 

        static GEARFUNCSDLL_API double SpeedToCadence(double dCadence, double dGearInches);
    };
}