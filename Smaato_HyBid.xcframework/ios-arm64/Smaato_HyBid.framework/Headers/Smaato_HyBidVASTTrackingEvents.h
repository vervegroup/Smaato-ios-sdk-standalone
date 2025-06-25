// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidXMLElementEx.h"
#import "Smaato_HyBidVASTTracking.h"

@interface HyBidVASTTrackingEvents : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTrackingEventsXMLElement:(HyBidXMLElementEx *)trackingEventsXMLElement;

/**
 An array of a CDATA-wrapped URI to a media files.
 */
- (NSArray<HyBidVASTTracking *> *)events;

@end
