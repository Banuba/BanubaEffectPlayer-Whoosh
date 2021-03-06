#include <bnb/glsl.vert>

BNB_LAYOUT_LOCATION(0)
BNB_IN vec3 attrib_pos;

BNB_OUT(0)
vec2 var_uv;

void main()
{
    vec2 v = attrib_pos.xy;
    gl_Position = vec4(v, 0., 1.);
    var_uv = v * 0.5 + 0.5;
}