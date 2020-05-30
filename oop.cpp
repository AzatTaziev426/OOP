#include <limits>
#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
#include "geometry.h"
#include "str&fun.hpp"
#include "vivod.hpp"

using namespace std;


int main() {
    Material ivory(Vec3f(0.6, 0.1, 0.3));
	std::vector<Sphere> spheres;
    spheres.push_back(Sphere(Vec3f(1, 1, -16), 2, ivory));   
	std::vector<Light>  lights;
    lights.push_back(Light(Vec3f(-20, 20,  20), 1.5));   
    render(spheres, lights);
    cout << "Code complet c: " << endl;
    system("gwenview out.ppm");

    return 0;
}