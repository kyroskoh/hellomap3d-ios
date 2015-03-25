/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
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


#import "MapPos_proxy.h"
#import "Bitmap_proxy.h"
#import "Geometry_proxy.h"
#import "PointGeometry_proxy.h"
#import "LabelStyle_proxy.h"
#import "Billboard_proxy.h"

/**
 * An abstract billboard element with a dynamically drawn bitmap that can be displayed on the map.
 */
__attribute__ ((visibility("default"))) @interface NTLabel : NTBillboard
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an abstract Label object with the specified style and attaches it to a billboard element.<br>
 * @param baseBillboard The billboard this label will be attached to.<br>
 * @param style The style that defines what this label looks like.
 */
-(id)initWithBaseBillboard: (NTBillboard*)baseBillboard style: (NTLabelStyle*)style;
/**
 * Constructs an abstract Label object from a geometry object and a style.<br>
 * @param geometry The geometry object that defines the location of this label.<br>
 * @param style The style that defines what this label looks like.
 */
-(id)initWithGeometry: (NTGeometry*)geometry style: (NTLabelStyle*)style;
/**
 * Constructs an abstract Label object from a map position and a style.<br>
 * @param pos The map position that defines the location of this label.<br>
 * @param style The style that defines what this label looks like.
 */
-(id)initWithPos: (NTMapPos*)pos style: (NTLabelStyle*)style;
/**
 * Draws a custom bitmap for this label that will be used for drawing the label on the map.<br>
 * The method is called each time the label gets reloaded internally.<br>
 * @param dpToPX The value used for converting display independent pixels (dp) to pixels (px).<br>
 * @return The custom label bitmap.
 */
-(NTBitmap*)drawBitmap: (float)dpToPX;
/**
 * Returns the style of this label.<br>
 * @return The style that defines what this label looks like.
 */
-(NTLabelStyle*)getStyle;
/**
 * Sets the style for this label.<br>
 * @return The new style that defines what this marker looks like.
 */
-(void)setStyle: (NTLabelStyle*)style;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

