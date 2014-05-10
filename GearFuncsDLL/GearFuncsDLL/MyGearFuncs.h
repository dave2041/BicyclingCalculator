namespace GearFuncs
{
    // This class is exported from the MathFuncsDll.dll
    class MyGearFuncs
    {
    public: 
        // Returns a + b
        static GEARFUNCSDLL_API double Add(double a, double b); 

        // Returns a - b
        static GEARFUNCSDLL_API double Subtract(double a, double b); 

        // Returns a * b
        static GEARFUNCSDLL_API double Multiply(double a, double b); 

        // Returns a / b
        // Throws const std::invalid_argument& if b is 0
        static GEARFUNCSDLL_API double Divide(double a, double b); 
    };
}