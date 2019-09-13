/*
 * Quaternion.h
 *
 *  Created on: 15 de jul de 2019
 *      Author: marcus
 */

#ifndef QUATERNION_H_
#define QUATERNION_H_


class Quaternion {

private:
	float w;
	float x;
	float y;
	float z;


public:
	Quaternion();


	Quaternion(float defw,float defx, float defy, float defz) :
	w(defw),x(defx),y(defy),z(defz){}

};

#endif /* QUATERNION_H_ */
