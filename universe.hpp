#ifndef UNIVERSE
#define UNIVERSE

using Vec3 = float[3];
using NUMBER = int;

class Universe {
public:
  Universe();
  ~Universe() = default;

  // constants
  bool BEGAN;
  bool DIED_OUT;
  bool IS_CURR;
  bool IS_EXPANDING;
  
  float EXPANSION_RATE;

  Vec3 UNI_MIN;
  Vec3 UNI_MAX;

  Vec3 LENGTH_ACROSS;
  Vec3 DISTANCE;


NUMBER PLANET_COUNT;
NUMBER STAR_COUNT;
NUMBER MOON_COUNT;
NUMBER BLACK_HOLE_COUNT;


};

const Universe universe() const{
  return *this;
}


#endif
