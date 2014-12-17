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


#import "LineGeometry_proxy.h"
#import "LineStyle_proxy.h"
#import "VectorElement_proxy.h"

/**
 * A geometric line string that can be displayed on the map.
 */
__attribute__ ((visibility("default"))) @interface NTLine : NTVectorElement
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a Line object from a geometry object and a style.<br>
 * @param geometry The geometry object that defines the location of this line.<br>
 * @param style The style that defines what this line looks like.
 */
-(id)initWithGeometry: (NTLineGeometry*)geometry style: (NTLineStyle*)style;
/**
 * Constructs a Line object from a vector of map positions and a style.<br>
 * @param poses The vector of map positions that defines the location of this line.<br>
 * @param style The style that defines what this line looks like.
 */
-(id)initWithPoses: (NTMapPosVector*)poses style: (NTLineStyle*)style;
-(NTLineGeometry*)getGeometry;
/**
 * Sets the location for this line.<br>
 * @param geometry The new geometry object that defines the location of this line.
 */
-(void)setGeometry: (NTLineGeometry*)geometry;
/**
 * Sets the location for this line.<br>
 * @param poses The new vector of map positions that defines the location of this line.
 */
-(void)setPoses: (NTMapPosVector*)poses;
/**
 * Returns the style of this line.<br>
 * @return The style that defines what this line looks like.
 */
-(NTLineStyle*)getStyle;
/**
 * Sets the style for this line.<br>
 * @return The new style that defines what this line looks like.
 */
-(void)setStyle: (NTLineStyle*)style;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

