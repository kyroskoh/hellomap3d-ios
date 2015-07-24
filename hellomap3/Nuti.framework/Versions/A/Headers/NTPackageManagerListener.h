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

/**
 * Possible error types for failed package downloads.
 */
typedef NS_ENUM(NSInteger, NTPackageErrorType) {
/**
 * Internal or system error.
 */
  NT_PACKAGE_ERROR_TYPE_SYSTEM,
/**
 * Connection or network error.
 */
  NT_PACKAGE_ERROR_TYPE_CONNECTION,
/**
 * The number of downloaded packages exceeded subscription limit.
 */
  NT_PACKAGE_ERROR_TYPE_DOWNLOAD_LIMIT_EXCEEDED,
/**
 * The bounding box of the package contains too many tiles.<br>
 * This error is only returned for custom bounding box packages.
 */
  NT_PACKAGE_ERROR_TYPE_PACKAGE_TOO_BIG,
/**
 * The license does not allow downloading offline packages.
 */
  NT_PACKAGE_ERROR_TYPE_NO_OFFLINE_PLAN
};


#import "NTPackageStatus.h"

/**
 * Base class for map package manager event listeners.<br>
 * Includes callbacks for package list events and individual package events.
 */
__attribute__ ((visibility("default"))) @interface NTPackageManagerListener : NSObject
{
  void *swigCPtr;
  BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTPackageManagerListener*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Listener method that is called when server package list has been successfully updated.
 */
-(void)onPackageListUpdated;
/**
 * Listener method that is called when server package could not be downloaded or updated.
 */
-(void)onPackageListFailed;
/**
 * Listener method that is called when a package status has changed.<br>
 * Information about the status of the package (current action, progress, etc) is explictly given with this event.<br>
 * @param id The id of the package whose status has changed<br>
 * @param version The version of the package whose status has changed<br>
 * @param status The current status of the package
 */
-(void)onPackageStatusChanged: (NSString*)arg1 version: (int)version status: (NTPackageStatus*)status;
/**
 * Listener method that is called when a package download has been cancelled.<br>
 * @param id The id of the package that has been cancelled<br>
 * @param version The version of the package that has been cancelled
 */
-(void)onPackageCancelled: (NSString*)arg1 version: (int)version;
/**
 * Listener method that is called when a package is successfully updated (downloaded or removed).<br>
 * @param id The id of the package that has been updated<br>
 * @param version The version of the package that has been updated
 */
-(void)onPackageUpdated: (NSString*)arg1 version: (int)version;
/**
 * Listener method that is called when updating a package failed (network error, etc).<br>
 * @param id The id of the package that failed<br>
 * @param version The version of the package that failed<br>
 * @param errorType Reason or type of the failure
 */
-(void)onPackageFailed: (NSString*)arg1 version: (int)version errorType: (enum NTPackageErrorType)errorType;
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
-(id)init;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

