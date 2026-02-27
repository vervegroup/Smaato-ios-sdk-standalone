//
// 
// NGSDK SDK License
//
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
