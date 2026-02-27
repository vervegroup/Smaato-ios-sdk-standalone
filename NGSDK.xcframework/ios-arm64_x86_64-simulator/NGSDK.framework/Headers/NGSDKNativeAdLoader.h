// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKNativeAd.h"

@protocol NGSDKNativeAdLoaderDelegate<NSObject>

- (void)nativeLoaderDidLoadWithNativeAd:(NGSDKNativeAd *)nativeAd;
- (void)nativeLoaderDidFailWithError:(NSError *)error;

@optional
- (void)nativeLoaderWillRefresh;

@end

@interface NGSDKNativeAdLoader : NSObject

@property (nonatomic, assign) BOOL isMediation;
@property (nonatomic) NSInteger autoRefreshTimeInSeconds;

- (void)loadNativeAdWithDelegate:(NSObject<NGSDKNativeAdLoaderDelegate> *)delegate withZoneID:(NSString *)zoneID;
- (void)loadNativeExchangeAdWithDelegate:(NSObject<NGSDKNativeAdLoaderDelegate> *)delegate withZoneID:(NSString *)zoneID;
- (void)loadNativeAdWithDelegate:(NSObject<NGSDKNativeAdLoaderDelegate> *)delegate withZoneID:(NSString *)zoneID withAppToken:(NSString *)appToken;
- (void)refresh;
- (void)stopAutoRefresh;
- (void)prepareNativeAdWithDelegate:(NSObject<NGSDKNativeAdLoaderDelegate> *)delegate withContent:(NSString *)adContent;

@end
