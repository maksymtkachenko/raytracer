/*
 * vec3.cpp
 *
 *  Created on: Jul 29, 2019
 *      Author: mtkachenko
 */

#include "vec3.h"

vec3::vec3() {
	e[0] = 0.0f;
	e[1] = 0.0f;
	e[2] = 0.0f;
}

vec3::vec3(float e0, float e1, float e2) {
	 e[0] = e0;
	 e[1] = e1;
	 e[2] = e2;
}

