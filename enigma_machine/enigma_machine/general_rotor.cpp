#include "stdafx.h"
#include "general_rotor.h"
#include <unordered_map>
#include <string>
using namespace std;

general_rotor::general_rotor()
{
	rotation = 'A';
	string standard = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string subsituted = "JGDQOXUSCAMIFRVTPNEWKBLZYH";
	for (int i = 0; i < 26; i++) {
		rotor_wiring[standard[i]] = subsituted[i];
	}
}


general_rotor::~general_rotor()
{
}

char general_rotor::input(char plain) {
	char rotated;
	if (plain>=rotation) {
		
	}
	else {
		rotated = 'A' + ('Z' - (plain + rotation));
	}

	
}
