using namespace std;
#include <iostream>
#include <stdexcept>
float Division(float num, float den) {
	if (den == 0) {
		throw runtime_error("Attempted to divide by zero\n");
	}
	return(num / den);
}
int main()
{
	float numerator(12.5), denominator(0), result;
	try {
		result = Division(numerator, denominator);
		cout << "the quotient is " << result << "\n";
	}
	catch (runtime_error& e) {
		cout << "Exception occured" << "\n" << e.what();
	}