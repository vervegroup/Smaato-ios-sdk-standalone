// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKXMLElementEx.h"

@interface NGSDKVASTIconViewTracking : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithIconViewTrackingXMLElement:(NGSDKXMLElementEx *)iconViewTrackingXMLElement;

/**
 A URI for the tracking resource file to be called when the icon creative is displayed.
 */
- (NSString *)content;

@end
