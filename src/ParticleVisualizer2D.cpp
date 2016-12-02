//============================================================================
// Name        : ParticleVisualizer2D.cpp
// Author      : Dylan Blakemore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../headers/inputfile.h"
using namespace std;

int main() {
	system_parameters sp;
	domain_details dd;
	InputFile input("../cpp_SPHTutorial/sph.out");

	particle_details pd;
	input.initParticleRead();
	pd = input.readParticle();

	std::cout << pd.x << "," << pd.y << std::endl;

	input.close();
	return 0;
}
