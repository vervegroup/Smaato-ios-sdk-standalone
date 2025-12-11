// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKXMLElementEx.h"
#import "NGSDKVASTTracking.h"

@interface NGSDKVASTTrackingEvents : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTrackingEventsXMLElement:(NGSDKXMLElementEx *)trackingEventsXMLElement;

/**
 An array of a CDATA-wrapped URI to a media files.
 */
- (NSArray<NGSDKVASTTracking *> *)events;

@end
