// MathFuncsDll.h

namespace MathFuncs
{
	class MyMathFuncs
	{
	public:
		// Returns a + b
		static __declspec(dllexport) int Add(int a, int b);

		// Returns a - b
		static __declspec(dllexport) int Subtract(int a, int b);

		// Returns a * b
		static __declspec(dllexport) int Multiply(int a, int b);

		// Returns a / b
		// Throws DivideByZeroException if b is 0
		static __declspec(dllexport) int Divide(int a, int b);
	};
}