#ifndef CONTINUM
#define CONTINUM

#include "gravity.hpp"

class Continum  {
  public:
      Continum();
      ~Continum() = default;

  NUMBER LINE;
  Vec3 BEND;
  Vec3 CURVE;
  auto GRAV_PULL_FORCE;
  float SPEED;

};

#endif
