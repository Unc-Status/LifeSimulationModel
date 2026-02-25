#ifndef UNIVERSE
#define UNIVERSE

// for vector math, ( x, y, z ) as space itself and reality is usually 3D from our dimensional view
using Vec3 = float[3];

// INTEGER
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
  
  float EXPANSION_RATE; // rate its expanding, if at all
  float UNI_AGE; // universe age

  Vec3 UNI_MIN; // lowest point of expansion
  Vec3 UNI_MAX; // highest point of expansion

  Vec3 LENGTH_ACROSS; // light_years across or dist
  Vec3 DISTANCE; // same thing diff use


  // counters
  NUMBER PLANET_COUNT;
  NUMBER STAR_COUNT;
  NUMBER MOON_COUNT;
  NUMBER BLACK_HOLE_COUNT;


};

// return the universe
const Universe universe() const{
  return *this;
}


#endif
