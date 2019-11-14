/******************************************************************************/
#include "!Set Prec Struct.h"
struct WaterMaterialClass
{
   VecH color;
   Half smooth,
        reflect,
        normal,
        wave_scale;
   Flt  scale_color,
        scale_normal,
        scale_bump,

        density,
        density_add,

        refract,
        refract_reflection;
};
BUFFER(WaterMaterial)
   WaterMaterialClass WaterMaterial;
BUFFER_END

BUFFER(Water)
   Vec4 WaterReflectMulAdd,
        WaterClamp;
   Vec2 WaterOfs;
   Vec2 WaterYMulAdd;
   Vec  WaterPlanePos,
        WaterPlaneNrm;
   VecH Water_color_underwater0,
        Water_color_underwater1;
   Half WaterUnderStep;
   Flt  Water_refract_underwater;
   Flt  WaterFlow;
BUFFER_END
#include "!Set Prec Default.h"
/******************************************************************************/
