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


#import "UnsignedCharVector_proxy.h"

/**
 * A helper class for managing application-bundled assets.
 */
__attribute__ ((visibility("default"))) @interface NTAssetUtils : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Loads the specified bundled resource.<br>
 * @param path The path of the resource to load. The path is relative to application root folder.<br>
 * @return The loaded resource as a byte vector or null if the resource was not found or could not be loaded.
 */
+(NTUnsignedCharVector*)LoadBytes: (NSString*)path __attribute((deprecated));
+(NTUnsignedCharVector*)loadBytes: (NSString*)path;
/**
 * Calculates path for the bundled resource.<br>
 * @param resourceName The name of the resource.<br>
 * @return The full path for the resource. Result will be empty string if the resource was not found.
 */
+(NSString*)CalculateResourcePath: (NSString*)name __attribute((deprecated));
+(NSString*)calculateResourcePath: (NSString*)resourceName;
/**
 * Calculates writable path for the given file name.<br>
 * @param fileName The file name to use.<br>
 * @return The full path for the given file name.
 */
+(NSString*)CalculateWritablePath: (NSString*)name __attribute((deprecated));
+(NSString*)calculateWritablePath: (NSString*)fileName;
-(id)init;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

