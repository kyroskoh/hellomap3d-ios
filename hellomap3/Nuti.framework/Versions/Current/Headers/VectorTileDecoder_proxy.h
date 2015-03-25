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


#import "TileData_proxy.h"
#import "Color_proxy.h"

/**
 * Abstract base class for vector tile decoders.
 */
__attribute__ ((visibility("default"))) @interface NTVectorTileDecoder : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns minimum zoom level supported for by the decoder (or style).<br>
 * @return Minimum supported zoom level.
 */
-(int)getMinZoom;
/**
 * Returns maximum zoom level supported for by the decoder (or style).<br>
 * @return Maximum supported zoom level.
 */
-(int)getMaxZoom;
/**
 * Notifies listeners that the decoder parameters have changed. Action taken depends on the implementation of the<br>
 * listeners, but generally all cached tiles will be reloaded. 
 */
-(void)notifyDecoderChanged;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

