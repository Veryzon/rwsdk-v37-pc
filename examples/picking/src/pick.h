
/****************************************************************************
 *
 * This file is a product of Criterion Software Ltd.
 *
 * This file is provided as is with no warranties of any kind and is
 * provided without any obligation on Criterion Software Ltd.
 * or Canon Inc. to assist in its use or modification.
 *
 * Criterion Software Ltd. and Canon Inc. will not, under any
 * circumstances, be liable for any lost revenue or other damages
 * arising from the use of this file.
 *
 * Copyright (c) 2000 Criterion Software Ltd.
 * All Rights Reserved.
 *
 */

/****************************************************************************
 *
 * pick.h
 *
 * Copyright (C) 2000 Criterion Software Ltd
 *
 * Author: RenderWare Team
 *
* Purpose: RenderWare Graphics atomic picking example, showing how atomics can be picked 
 *          either by their bounding spheres or triangles.
 *****************************************************************************/

#ifndef PICK_H
#define PICK_H

#include "rwcore.h"
#include "rpworld.h"

enum PickModes 
{
    TRIANGLES = 0, 
    BOUNDINGSPHERE,

    PICKMODESFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

extern enum PickModes CurrentPickMode;

#ifdef    __cplusplus
extern "C"
{
#endif  /* __cplusplus */

extern void PickNearestAtomic(RwV2d *pixel);
extern void ClumpSetRenderCallBack(RpClump *clump);

#ifdef    __cplusplus
}
#endif  /* __cplusplus */

#endif  /* PICK_H */
