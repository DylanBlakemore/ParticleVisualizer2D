/*
 * ParticleSystem.h
 *
 *  Created on: 29 Nov 2016
 *      Author: dylan
 */

#ifndef PARTICLESYSTEM_H_
#define PARTICLESYSTEM_H_

#include <vector>

#include "particle.h"

class ParticleSystem {
public:
	ParticleSystem();
private:
	std::vector<Particle*> particles;
};



#endif /* PARTICLESYSTEM_H_ */
