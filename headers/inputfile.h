/*
 * inputfile.h
 *
 *  Created on: 30 Nov 2016
 *      Author: dylan
 */

#ifndef INPUTFILE_H_
#define INPUTFILE_H_

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

struct system_parameters {
	int n_frames;
	int np_frame;
	float dt;
	float h;
	float rho_0;
	float k;
	float mu;
	float g;
	int n_part;
	float mass;
};

struct domain_details {
	float scaling;
	float xmin;
	float xmax;
	float ymin;
	float ymax;
};

struct particle_details {
	int id;	// id == -1 indicates end of frame
	float x;
	float y;
	float vx;
	float vy;
	float ax;
	float ay;
	float rho;
};

class InputFile {
public:
	InputFile(std::string fname) {
		infile.open(fname.c_str(), std::ios::binary | std::ios::in);
	}
	system_parameters readSystemParameters();
	domain_details readDomainDetails();
	particle_details readParticle();
	void initParticleRead();
	void close(){infile.close();}

	~InputFile(){infile.close();}
private:
	int readyToRead = 0;
	std::string fname;
	std::ifstream infile;
};




#endif /* INPUTFILE_H_ */
