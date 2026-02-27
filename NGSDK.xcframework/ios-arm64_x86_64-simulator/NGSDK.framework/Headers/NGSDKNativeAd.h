// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NGSDKAd.h"
#import "NGSDKNativeAdRenderer.h"
#import "NGSDKContentInfoView.h"
#import "NGSDKSkAdNetworkModel.h"

@class NGSDKNativeAd;
@class NGSDKAdSessionData;

@protocol NGSDKNativeAdDelegate <NSObject>

- (void)nativeAd:(NGSDKNativeAd *)nativeAd impressionConfirmedWithView:(UIView *)view;
- (void)nativeAdDidClick:(NGSDKNativeAd *)nativeAd;

@end

@protocol NGSDKNativeAdFetchDelegate <NSObject>

- (void)nativeAdDidFinishFetching:(NGSDKNativeAd *)nativeAd;
- (void)nativeAd:(NGSDKNativeAd *)nativeAd didFailFetchingWithError:(NSError *)error;

@end

@interface NGSDKNativeAd : NSObject

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *callToActionTitle;
@property (nonatomic, readonly) NSString *iconUrl;
@property (nonatomic, readonly) NSString *bannerUrl;
@property (nonatomic, readonly) NSString *clickUrl;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly) UIView *banner;
@property (nonatomic, readonly) UIImage *bannerImage;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, strong) NGSDKAd *ad;
@property (nonatomic, readonly) NGSDKContentInfoView *contentInfo;
@property (nonatomic, strong) NGSDKAdSessionData *adSessionData;

- (instancetype)initWithAd:(NGSDKAd *)ad;
- (void)renderAd:(NGSDKNativeAdRenderer *)renderer;
- (void)fetchNativeAdAssetsWithDelegate:(NSObject<NGSDKNativeAdFetchDelegate> *)delegate;
- (void)startTrackingView:(UIView *)view withDelegate:(NSObject<NGSDKNativeAdDelegate> *)delegate;
- (void)stopTracking;

@end
