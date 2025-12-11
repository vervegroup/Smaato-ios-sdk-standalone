// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 140500
#import <StoreKit/SKAdImpression.h>
#endif

#import <StoreKit/SKAdNetwork.h>
#import "NGSDKAd.h"

@interface NGSDKAdImpression : NSObject

+ (NGSDKAdImpression *)sharedInstance;
- (void)startSKANImpressionForAd:(NGSDKAd *)ad;
- (void)endSKANImpressionForAd:(NGSDKAd *)ad;
- (void)startAAKImpressionForAd:(NGSDKAd *)ad adFormat:(NSString *)adFormat;
- (void)endAAKImpressionForAd:(NGSDKAd *)ad adFormat:(NSString *)adFormat;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 140500
- (SKAdImpression *)generateSkAdImpressionFrom:(NGSDKSkAdNetworkModel *)model API_AVAILABLE(ios(14.5));
#endif

@end
