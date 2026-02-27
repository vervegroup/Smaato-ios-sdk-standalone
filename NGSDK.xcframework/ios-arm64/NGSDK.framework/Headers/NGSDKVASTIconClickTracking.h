// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKXMLElementEx.h"

@interface NGSDKVASTIconClickTracking : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithIconClickTrackingXMLElement:(NGSDKXMLElementEx *)iconClickTrackingXMLElement;

/**
 An id for the click to be measured.
 */
- (NSString *)id;

/**
 A URI to the tracking resource file to be called when a click corresponding to the id attribute (if provided) occurs.
 */
- (NSString *)content;

@end
