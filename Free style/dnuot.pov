
#include "colors.inc"

camera {
    location <0, .4, -25>
    look_at 0
    angle 60
}

background { colour rgb <56.0, 56.0,56.0> } // to make the torus easy to see
light_source { <300, 300, -1000> White }

torus {
    4, 1              // major and minor radius
    rotate -60*x      // so we can see it from the top
    pigment { Gray50 }
}