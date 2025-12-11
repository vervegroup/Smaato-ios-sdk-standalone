//
// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//
//

#import <Foundation/Foundation.h>

@class NGSDKAdSessionData;
@class NGSDKAdRequest;
@class NGSDKAd;

@interface ATOMManager : NSObject

+ (void)fireAdSessionEventWithData:(NGSDKAdSessionData *)data;
+ (NGSDKAdSessionData *)createAdSessionDataFromRequest:(NGSDKAdRequest * _Nullable)request
                                                    ad:(NGSDKAd *)ad;
+ (void)reportAdSessionDataSharedEventWithAdSessionDict:(NSDictionary<NSString *, id> *)adSessionDict;

@end
