// This program uses two strongly typed enumerated data types.
#include <iostream>
using namespace std;

enum class Presidents { MCKINLEY, ROOSEVELT, TAFT };
enum class VicePresidents { ROOSEVELT, FAIRBANKS, SHERMAN };

int main()
{
	Presidents prez = Presidents::ROOSEVELT;
	VicePresidents vp1 = VicePresidents::ROOSEVELT;
	VicePresidents vp2 = VicePresidents::SHERMAN;

	cout << static_cast<int>(prez) << "  " << static_cast<int>(vp1)
		 << "  " << static_cast<int>(vp2) << endl;
	return 0;
}
