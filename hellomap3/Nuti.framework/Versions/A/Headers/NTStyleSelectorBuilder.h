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


#import "NTStyle.h"
#import "NTStyleSelector.h"

/**
 * Builder class for style selectors.
 */
__attribute__ ((visibility("default"))) @interface NTStyleSelectorBuilder : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a new empty builder.
 */
-(id)init;
/**
 * Adds new rule to the builder rule set. The rules are defined by a filter expression and corresponding style.<br>
 * Filter expressions are defined using simple built-in SQL like language with the following properties:<br>
 * - The following boolean operators are supported: AND, OR, NOT.<br>
 * - The following predicates are supported: IS NULL, IS NOT NULL, =, &lt;&gt;, &lt;=, &gt;=, &lt;, &gt;.<br>
 * - Operator precedence is similar to SQL (NOT &gt; AND &gt; OR), parenthesis can be used to group expressions.<br>
 * - There are few prebuilt variables (view::zoom, geometry::type), other variables correspond to metadata values.<br>
 * @param expr The filter expression to use for this rule. For example, "geometry::type = 'linestring' AND type = 'road'"<br>
 * @param style The style for this rule.<br>
 * @return Self.
 */
-(void)addFilterRule: (NSString*)expr style: (NTStyle*)style;
/**
 * Adds new rule to the builder rule set. This method should be used to add the 'default' style, if no filter needs to be applied.<br>
 * @param style The style for this rule.<br>
 * @return Self.
 */
-(void)addRule: (NTStyle*)style;
/**
 * Builds a new style selector from the added rule list.<br>
 * @return Style selector with all the added rules.
 */
-(NTStyleSelector*)buildSelector;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

