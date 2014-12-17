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

__attribute__ ((visibility("default"))) @interface NTMapPosVector : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)init;
-(unsigned long)size;
-(unsigned long)capacity;
-(void)reserve: (unsigned long)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTMapPos*)x;
-(NTMapPos*)get: (int)i;
-(void)set: (int)i val: (NTMapPos*)val;

-(void)dealloc;

@end


#import "MapPos_proxy.h"

__attribute__ ((visibility("default"))) @interface NTMapPosVectorVector : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
-(id)init;
-(unsigned long)size;
-(unsigned long)capacity;
-(void)reserve: (unsigned long)n;
-(BOOL)isEmpty;
-(void)clear;
-(void)add: (NTMapPosVector*)x;
-(NTMapPosVector*)get: (int)i;
-(void)set: (int)i val: (NTMapPosVector*)val;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

