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

/**
 * Spatial index type for local data source.
 */
enum NTLocalSpatialIndexType {
/**
 * Null index, fastest if few elements are used. No element culling is performed.
 */
  NT_NULL_SPATIAL_INDEX,
/**
 * K-d tree index, element culling is exact and fast.
 */
  NT_KDTREE_SPATIAL_INDEX
};


#import "VectorDataSource_proxy.h"
#import "GeometrySimplifier_proxy.h"
#import "Projection_proxy.h"
#import "CullState_proxy.h"
#import "VectorElement_proxy.h"
#import "VectorElementVector_proxy.h"

/**
 * A modifiable vector data source that keeps all the elements in the local memory.<br>
 * Optionally vector elements can be kept in a spatial index and only the visible elements get rendered.<br>
 * There can be a small delay before previously invisible elements become visible after view changes.<br>
 * This makes it suitable for cases where there are a large number of static vector elements.<br>
 * <br>
 * The draw order of vector elements within the data source is undefined.
 */
__attribute__ ((visibility("default"))) @interface NTLocalVectorDataSource : NTVectorDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an LocalVectorDataSource object with no spatial index.<br>
 * @param projection The projection used by this data source.
 */
-(id)initWithProjection: (NTProjection*)projection;
/**
 * Constructs an LocalVectorDataSource object with specified spatial index.<br>
 * @param projection The projection used by this data source.<br>
 * @param spatialIndexType The spatial index type to use.
 */
-(id)initWithProjection: (NTProjection*)projection spatialIndexType: (enum NTLocalSpatialIndexType)spatialIndexType;
-(NTVectorElementVector*)loadElements: (NTCullState*)cullState;
/**
 * Returns all vector elements added to this data source using add() and addAll() methods.<br>
 * @return A vector containing all the vector elements in this data source.
 */
-(NTVectorElementVector*)getAll;
/**
 * Adds a vector element to the data source. The vector element's coordinates are expected to be<br>
 * in the data source's projection's coordinate system. The order in which the elements are added has<br>
 * no effect on the order they get rendered.<br>
 * @param element The vector element to be added.
 */
-(void)add: (NTVectorElement*)element;
/**
 * Adds multiple vector elements to the data source. The vector elements' coordinates are expected to be<br>
 * in the data source's projection's coordinate system. The order in which the elements are added has<br>
 * no effect on the order they get rendered.<br>
 * @param elements A vector of vector elements to be added.
 */
-(void)addAll: (NTVectorElementVector*)elements;
/**
 * Removes a vector element from the data source.<br>
 * @param elementToRemove The vector element to be removed.<br>
 * @return True if the vector element existed in the data source.
 */
-(BOOL)remove: (NTVectorElement*)elementToRemove;
/**
 * Removes all vector elements from the data source.<br>
 * @return The removed vector elements.
 */
-(NTVectorElementVector*)removeAll;
/**
 * Returns the active geometry simplifier of the data source.<br>
 * @return The current geometry simplifier (can be null)
 */
-(NTGeometrySimplifier*)getGeometrySimplifier;
/**
 * Attaches geometry simplifier to the data source. If the specified simplifier is null, detaches any active simplifier.<br>
 * @param simplifier The new geometry simplifier to use (can be null).
 */
-(void)setGeometrySimplifier: (NTGeometrySimplifier*)simplifier;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

