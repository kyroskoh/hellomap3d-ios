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


#import "NTGeometry.h"
#import "NTMultiGeometry.h"
#import "NTLineGeometry.h"
#import "NTLineGeometryVector.h"

/**
 * A multiline container.
 */
__attribute__ ((visibility("default"))) @interface NTMultiLineGeometry : NTMultiGeometry
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTMultiLineGeometry*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a MultiLineGeometry object from the vector of lines.
 */
-(id)initWithGeometries: (NTLineGeometryVector*)geometries;
/**
 * Returns the line geometry at the specified index. Index must be between 0 and getGeometryCount (exclusive)<br>
 * @return The line geometry at specified index.
 */
-(NTLineGeometry*)getGeometry: (int)index;
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

