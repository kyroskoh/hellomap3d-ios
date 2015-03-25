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


#import "MapTile_proxy.h"
#import "TileDataSource_proxy.h"
#import "PackageManager_proxy.h"
#import "TileData_proxy.h"

/**
 * A tile data source that loads tiles from package manager.
 */
__attribute__ ((visibility("default"))) @interface NTPackageManagerTileDataSource : NTTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a PackageManagerTileDataSource object.<br>
 * @param packageManager The package manager that is used to retrieve requested tiles.
 */
-(id)initWithPackageManager: (NTPackageManager*)packageManager;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

