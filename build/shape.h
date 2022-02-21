//
// Created by Vy Phan on 2/20/22.
//

#ifndef SHAPE_H
#define SHAPE_H

#include "ray.h"

struct hit_record {
    point3 p;
    vec3 normal;
    double t;
    bool front_face;

    inline void set_face_normal( const ray &r, const vec3 &outward_normal ) {
        front_face = dot( r.direction(), outward_normal ) < 0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class shape {
public:
    virtual bool hit( const ray& r, double t_min, double t_max, hit_record &rec ) const = 0;
};

#endif //SHAPE_H
