#include <unordered_map>
using namespace std;

class general_rotor
{
	char rotation;
	unordered_map<char, char> rotor_wiring;
public:
	general_rotor();
	~general_rotor();
	char input(char plain);
};
