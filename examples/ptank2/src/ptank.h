
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
 * Copyright (c) 2001 Criterion Software Ltd.
 * All Rights Reserved.
 *
 */

/****************************************************************************
 *
 * ptank.c
 *
 * Copyright (C) 2001 Criterion Software Ltd
 *
 * Author: RenderWare Team
 *
 * Purpose: The PTANK2 example shows how to create a PTank.
 * In this second example the particles are long shaped and have no texture.
 * Color is allocated per-particle, 2D rotation is applied per-particle.
 *                         
 ****************************************************************************/

#ifndef ptank_H
#define ptank_H

#include "rwcore.h"

extern RpWorld *World;
extern RwCamera *Camera;
#ifdef    __cplusplus
extern "C"
{
#endif                          /* __cplusplus */

extern RwBool PTankInitialize(void);
extern void PTankTerminate(void);
extern void PTankRender(void);

#ifdef    __cplusplus
}
#endif                          /* __cplusplus */

#endif /* ptank_H */


