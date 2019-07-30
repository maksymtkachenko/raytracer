#include <iostream>
#include <fstream>
#include "ray.h"

vec3 color(const ray& r) {
	vec3 unit_direction = unit_vector(r.direction());

	return unit_direction;
}


int main() {
	int nx = 400;
	int ny = 200;

	std::ofstream imageFile ("image.ppm");
	if (imageFile.is_open())
	{
	  imageFile << "P3\n" << nx << " " << ny << "\n255\n";

	  vec3 lower_left_corner(-2.0, -1.0, -1.0);
	  vec3 horizontal(4.0, 0.0, 0.0);
	  vec3 vertical(0.0, 2.0, 0.0);
	  vec3 origin(0.0, 0.0, 0.0);

	  for(int j = ny-1; j >= 0; j--) {
		  for(int i = 0; i < nx; i++) {
			  float u = float(i) / float(nx);
			  float v = float(j) / float(ny);
			  ray r(origin, lower_left_corner + u*horizontal + v*vertical);
			  vec3 col = color(r);
		  }
	  }

	}



	return 0;
}
