/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "NTMapPos.h"
#import "NTScreenPos.h"
#import "NTMapVec.h"
#import "NTOptions.h"
#import "NTFrustum.h"
#import "NTProjection.h"

/**
 * A class containing various view parameters for a view state.
 */
__attribute__ ((visibility("default"))) @interface NTViewState : NSObject
{
  void *swigCPtr;
  BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**  
 * Checks if this object is equal to the specified object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;

/**
 * Returns the camera position.<br>
 * @return The camera position.
 */
-(NTMapPos*)getCameraPos;
/**
 * Returns the focus position.<br>
 * @return The focus position.
 */
-(NTMapPos*)getFocusPos;
/**
 * Returns the up direction vector.<br>
 * @return The up direction vector.
 */
-(NTMapVec*)getUpVec;
/**
 * Returns the state of the camera changed flag.<br>
 * @return True if camera has changed since the last frame.
 */
-(BOOL)isCameraChanged;
/**
 * Returns the camera rotation angle.<br>
 * @return The camera rotation angle in degrees.
 */
-(float)getRotation;
/**
 * Returns the camera tilt angle.<br>
 * @return The camera tilt angle in degrees.
 */
-(float)getTilt;
/**
 * Returns the camera zoom level.<br>
 * @return The camera zoom level.
 */
-(float)getZoom;
/**
 * Returns the number 2 lifted to the power of the zoom level: pow(2, zoom level).<br>
 * @return pow(2, zoomLevel).
 */
-(float)get2PowZoom;
/**
 * Returns the distance between the focus and the camera position, when the zoom level is set to 0.<br>
 * This parameter depends on the screen size, DPI, tile draw size and field of view settings.<br>
 * @return The distance between focus to camera position, when zoom level = 0.
 */
-(float)getZoom0Distance;
/**
 * Get normalized resolution of the view. This is an internal parameter used by vector tile renderer.<br>
 * @return The screen resolution of the view.
 */
-(float)getNormalizedResolution;
/**
 * Returns the width of the map screen.<br>
 * @return The map screen width.
 */
-(int)getWidth;
/**
 * Returns the height of the map screen.<br>
 * @return The map screen height.
 */
-(int)getHeight;
/**
 * Returns the width of the map screen divided by 2.<br>
 * @return The map screen width divided by 2.
 */
-(float)getHalfWidth;
/**
 * Returns the height of the map screen divided by 2.<br>
 * @return The map screen height divided by 2.
 */
-(float)getHalfHeight;
/**
 * Returns the aspect ratio of the map screen. Equal to width / height.<br>
 * @return The aspect ratio of the map screen.
 */
-(float)getAspectRatio;
/**
 * Returns the near plane distance.<br>
 * @return The new plane distance.
 */
-(double)getNear;
/**
 * Returns the far plane distance.<br>
 * @return The far plane distance.
 */
-(double)getFar;
/**
 * Returns the vertical field of view angle.<br>
 * @return The vertical field of view angle in degrees.
 */
-(int)getFOVY;
/**
 * Returns the vertical field of view angle, divided by 2.<br>
 * @return The vertical field of view angle in degrees, divided by 2.
 */
-(float)getHalfFOVY;
/**
 * Returns the tangent of the half vertical FOV angle.<br>
 * @return The tangent of the half vertical FOV angle.
 */
-(double)getTanHalfFOVY;
/**
 * Returns the cosine of the half vertical FOV angle.<br>
 * @return The cosine of the half vertical FOV angle.
 */
-(double)getCosHalfFOVY;
/**
 * Returns the tangent of the half horizontal FOV angle.<br>
 * @return The tangent of the half horizontal FOV angle.
 */
-(double)getTanHalfFOVX;
/**
 * Returns the cosine of the half horizontal FOV angle multiplied <br>
 * by the cosine of the half vertical FOV angle.<br>
 * @return The cosine of the half horizontal FOV angle multiplied<br>
 * by the cosine of the half vertical FOV angle.
 */
-(double)getCosHalfFOVXY;
/**
 * Returns a value that is used for converting display independent pixels (dp) to pixels (px).<br>
 * This values depends on the screen density.<br>
 * @return The dp to px value.
 */
-(float)getDPToPX;
/**
 * Returns the dots per inch parameter of the screen.<br>
 * @return The screen DPI parameter.
 */
-(float)getDPI;
/**
 * Returns the conversion ratio between internal map units and screen pixels. This parameter is dependent<br>
 * on the zoom level and other screen parameters.<br>
 * @return The conversion ratio between internal map units and screen pixels.
 */
-(float)getUnitToPXCoef;
/**
 * Returns the conversion ratio between internal map units and screen density independent pixels (DP or DIP). <br>
 * This parameter is dependent on the zoom level, DPI and other screen parameters.<br>
 * @return The conversion ratio between internal map units and screen density independent pixels.
 */
-(float)getUnitToDPCoef;
/**
 * Returns the projection mode.<br>
 * @return The projection mode.
 */
-(enum NTProjectionMode)getProjectionMode;
/**
 * Returns the view frustum.<br>
 * @return The view frustum.
 */
-(NTFrustum*)getFrustum;
/**
 * Returns the screen width.<br>
 * @return The current screen width.
 */
-(int)getScreenWidth;
/**
 * Returns the screen height.<br>
 * @return The current screen height.
 */
-(int)getScreenHeight;
/**
 * Projects a world position onto the screen using the current view state.<br>
 * @param worldPos The world position.<br>
 * @param options The options object.<br>
 * @return The world position projected onto the screen, in pixel coordinates.
 */
-(NTScreenPos*)worldToScreen: (NTMapPos*)worldPos options: (NTOptions*)options;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

