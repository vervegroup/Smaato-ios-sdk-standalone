// 
// NGSDK SDK License
//
//

#import <UIKit/UIKit.h>
#import "NGSDKAd.h"
#import "NGSDKAdRequest.h"
#import "NGSDKAdPresenter.h"

@class NGSDKAdView;

typedef enum {
    BANNER_POSITION_UNKNOWN,
    BANNER_POSITION_TOP,
    BANNER_POSITION_BOTTOM
} NGSDKBannerPosition;

@protocol NGSDKAdViewDelegate<NSObject>

- (void)adViewDidLoad:(NGSDKAdView *)adView;
- (void)adView:(NGSDKAdView *)adView didFailWithError:(NSError *)error;
- (void)adViewDidTrackImpression:(NGSDKAdView *)adView;
- (void)adViewDidTrackClick:(NGSDKAdView *)adView;

@optional
- (void)adViewWillRefresh:(NGSDKAdView *)adView;

@end

@interface NGSDKAdView : UIView <NGSDKAdRequestDelegate, NGSDKAdPresenterDelegate>

@property (nonatomic, strong) NGSDKAdRequest *adRequest;
@property (nonatomic, strong) NGSDKAd *ad;
@property (nonatomic, weak) NSObject <NGSDKAdViewDelegate> *delegate;
@property (nonatomic, assign) BOOL isMediation;
@property (nonatomic, strong) NGSDKAdSize *adSize;
@property (nonatomic, assign) BOOL autoShowOnLoad;
@property (nonatomic) NGSDKBannerPosition bannerPosition;
@property (nonatomic, assign) BOOL isAutoCacheOnLoad;
@property (nonatomic) NSInteger autoRefreshTimeInSeconds;

- (instancetype)initWithSize:(NGSDKAdSize *)adSize;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (void)loadWithZoneID:(NSString *)zoneID andWithDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)loadExchangeAdWithZoneID:(NSString *)zoneID andWithDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)loadWithZoneID:(NSString *)zoneID withAppToken:(NSString *)appToken andWithDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)loadWithZoneID:(NSString *)zoneID withPosition:(NGSDKBannerPosition)bannerPosition andWithDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)loadExchangeAdWithZoneID:(NSString *)zoneID withPosition:(NGSDKBannerPosition)bannerPosition andWithDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)setOpenRTBAdTypeWithAdFormat:(NGSDKOpenRTBAdType)adFormat;
- (void)setupAdView:(UIView *)adView;
- (void)renderAd;
- (void)renderAdWithContent:(NSString *)adContent withDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)renderAdWithAdResponse:(NSString *)adReponse withDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)renderAdWithAdResponseOpenRTB:(NSString *)adReponse withDelegate:(NSObject<NGSDKAdViewDelegate> *)delegate;
- (void)startTracking;
- (void)stopTracking;
- (void)prepare;
- (void)prepareCustomMarkupFrom:(NSString *)markup withPlacement:(NGSDKMarkupPlacement)placement;
- (void)show;
- (void)refresh;
- (void)stopAutoRefresh;
- (NGSDKAdPresenter *)createAdPresenter;

- (void)setMediationVendor:(NSString *)mediationVendor;

@end
