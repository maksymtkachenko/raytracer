#ifndef VEC3_H_
#define VEC3_H_

class vec3 {
public:
	vec3() {}
	vec3(float e0, float e1, float e2);
	inline float x() const { return e[0]; }
	inline float y() const { return e[1]; }
	inline float z() const { return e[2]; }
	inline float r() const { return e[0]; }
	inline float g() const { return e[1]; }
	inline float b() const { return e[2]; }




	float e[3];
};

#endif /* VEC3_H_ */
