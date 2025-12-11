// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKVASTAdTrackingEventType.h"
#import "NGSDKXMLElementEx.h"

@interface NGSDKVASTTracking: NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithTrackingXMLElement:(NGSDKXMLElementEx *)trackingXMLElement;

- (NSString *)url;

- (NSString *)event;

- (NSString *)offset;

@end
