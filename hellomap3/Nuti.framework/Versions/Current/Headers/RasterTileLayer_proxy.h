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


#import "TileDataSource_proxy.h"
#import "TileLoadListener_proxy.h"
#import "TileLayer_proxy.h"

/**
 * A tile layer where each tile is a bitmap. Should be used together with corresponding data source.
 */
__attribute__ ((visibility("default"))) @interface NTRasterTileLayer : NTTileLayer
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a RasterTileLayer object from a data source.<br>
 * @param dataSource The data source from which this layer loads data.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource;
/**
 * Returns the current frame number.<br>
 * @return The current frame number.
 */
-(int)getFrameNr;
/**
 * Sets the frame number, only used for animated tiles. Loading a new frame may take some time,<br>
 * previous frame is shown during loading.<br>
 * @param frameNr The frame number to display.
 */
-(void)setFrameNr: (int)frameNr;
/**
 * Returns the state of the synchronized refresh flag.<br>
 * @return The state of the synchronized refresh flag.
 */
-(BOOL)isSynchronizedRefresh;
/**
 * Sets the state of the synchronized refresh flag. If disabled all tiles will appear on screen<br>
 * one by one as they finish loading. If enabled the map will wait for all the visible tiles to finish loading<br>
 * and then show them all on screen together. This is useful for animated tiles.<br>
 * @param synchronizedRefresh The new state of the synchronized refresh flag.
 */
-(void)setSynchronizedRefresh: (BOOL)synchronizedRefresh;
/**
 * Returns the tile load listener.<br>
 * @return The tile load listener.
 */
-(NTTileLoadListener *)getTileLoadListener;
/**
 * Sets the tile load listener.<br>
 * @param tileLoadListener The tile load listener.
 */
-(void)setTileLoadListener: (NTTileLoadListener*)tileLoadListener;
/**
 * Returns the tile texture cache capacity.<br>
 * @return The tile texture cache capacity in bytes.
 */
-(unsigned int)getTextureCacheCapacity;
/**
 * Sets the tile texture cache capacity. Texture cache is the primary storage for raster data,<br>
 * all tiles contained within the texture cache are stored as uncompressed openGL textures and can immediately be<br>
 * drawn to the screen. Setting the cache size too small may cause artifacts, such as disappearing tiles.<br>
 * The more tiles are visible on the screen, the larger this cache should be. A single opaque 256x256 tile takes<br>
 * up 192KB of memory, a transparent tile of the same size takes 256KB. The number of tiles on the screen depends<br>
 * on the screen size and density, current rotation and tilt angle, tile draw size parameter and <br>
 * whether or not preloading is enabled.<br>
 * The default is 10MB, which should be enough for most use cases with preloading enabled. If preloading is<br>
 * disabled, the cache size should be reduced by the user to conserve memory.<br>
 * @return The new tile bitmap cache capacity in bytes.
 */
-(void)setTextureCacheCapacity: (unsigned int)capacityInBytes;
-(void)clearTileCaches: (BOOL)all;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

