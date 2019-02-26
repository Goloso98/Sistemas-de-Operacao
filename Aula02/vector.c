#include <stdlib.h>
#include <math.h>

#include "vector.h"

vector* vector_new(double x, double y, double z) {
   vector* v = (vector*) malloc(sizeof(vector));
   v->x = x;
   v->y = y;
   v->z = z;
   return v;
}

vector* vector_add(vector* v, vector* u) {
   return vector_new(v->x + u->x,
                     v->y + u->y,
                     v->z + u->z);
}

vector* vector_sub(vector* v, vector* u) {
   return vector_new(v->x - u->x,
                     v->y - u->y,
                     v->z - u->z);
}

vector* vector_scale(double k, vector* v) {
   return vector_new(k * v->x, k * v->y, k * v->z);
}

vector* vector_vprod(vector* v, vector* u) {
   return vector_new(v->y*u->z - v->z*u->y,
                     v->z*u->x - v->x*u->z,
                     v->x*u->y - v->y*u->x);
}

double vector_sprod(vector* v, vector* u) {
   return v->x*u->x + v->y*u->y + v->z*u->z;
}

double vector_mod(vector* v) {
   return sqrt(v->x*v->x + v->y*v->y + v->z*v->z);
}
