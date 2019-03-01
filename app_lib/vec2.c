
#include "vec2.h"

vec2_t vec2_add(vec2_t a, vec2_t b) {
  vec2_t result;
  result.x = a.x + b.x;
  result.y = a.y + b.y;
  return result;
}
