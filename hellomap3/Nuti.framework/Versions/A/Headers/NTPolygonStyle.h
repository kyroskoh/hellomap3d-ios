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


#import "NTBitmap.h"
#import "NTColor.h"
#import "NTLineStyle.h"

/**
 * A style for polygons. Contains attributes for configuring how the polygon is drawn on the screen.
 */
__attribute__ ((visibility("default"))) @interface NTPolygonStyle : NTStyle
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTPolygonStyle*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a PolygonStyle object from various parameters. Instantiating the object directly is<br>
 * not recommended, PolygonStyleBuilder should be used instead.<br>
 * @param color The color for the polygon.<br>
 * @param bitmap The bitmap for the polygon.<br>
 * @param lineStyle The line style for the edges of the polygon. May be null.
 */
-(id)initWithColor: (NTColor*)color bitmap: (NTBitmap*)bitmap lineStyle: (NTLineStyle*)lineStyle;
/**
 * Returns the bitmap of the polygon.<br>
 * @return The bitmap of the polygon.
 */
-(NTBitmap*)getBitmap;
/**
 * Returns the style of the edges of the polygon.<br>
 * @return The style of the edges of the polygon. May be null.
 */
-(NTLineStyle*)getLineStyle;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.<br>
 * @return The class name of this object.
 */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.<br>
 * @return The pointer to the connected director object or null if director is not connected.
 */
-(void *)swigGetDirectorObject;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

