// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <UIKit/UIKit.h>

//! Project version number for HyBid.
FOUNDATION_EXPORT double HyBidVersionNumber;

//! Project version string for HyBid.
FOUNDATION_EXPORT const unsigned char HyBidVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import "Smaato_PublicHeader.h"

//Banner module headers
#if __has_include("Smaato_HyBidLeaderboardAdRequest.h")
    #import "Smaato_HyBidLeaderboardAdRequest.h"
#endif
#if __has_include("Smaato_HyBidBannerAdRequest.h")
    #import "Smaato_HyBidBannerAdRequest.h"
#endif
#if __has_include("Smaato_HyBidLeaderboardPresenterFactory.h")
    #import "Smaato_HyBidLeaderboardPresenterFactory.h"
#endif
#if __has_include("Smaato_HyBidLeaderboardAdView.h")
    #import "Smaato_HyBidLeaderboardAdView.h"
#endif
#if __has_include("Smaato_HyBidBannerAdView.h")
    #import "Smaato_HyBidBannerAdView.h"
#endif
#if __has_include("Smaato_HyBidMRectAdRequest.h")
    #import "Smaato_HyBidMRectAdRequest.h"
#endif
#if __has_include("Smaato_HyBidMRectPresenterFactory.h")
    #import "Smaato_HyBidMRectPresenterFactory.h"
#endif
#if __has_include("Smaato_HyBidMRectAdView.h")
    #import "Smaato_HyBidMRectAdView.h"
#endif

//Native module headers
#if __has_include("Smaato_HyBidNativeAdLoader.h")
    #import "Smaato_HyBidNativeAdLoader.h"
#endif
#if __has_include("Smaato_HyBidNativeAd.h")
    #import "Smaato_HyBidNativeAd.h"
#endif
#if __has_include("Smaato_HyBidNativeAdRenderer.h")
    #import "Smaato_HyBidNativeAdRenderer.h"
#endif

//FullScreen Module headers
#if __has_include("Smaato_HyBidInterstitialAdRequest.h")
    #import "Smaato_HyBidInterstitialAdRequest.h"
#endif
#if __has_include("Smaato_HyBidInterstitialPresenter.h")
    #import "Smaato_HyBidInterstitialPresenter.h"
#endif
#if __has_include("Smaato_HyBidInterstitialPresenterFactory.h")
    #import "Smaato_HyBidInterstitialPresenterFactory.h"
#endif
#if __has_include("Smaato_HyBidInterstitialAd.h")
    #import "Smaato_HyBidInterstitialAd.h"
#endif

//Rewarded video Module headers
#if __has_include("Smaato_HyBidRewardedAdRequest.h")
    #import "Smaato_HyBidRewardedAdRequest.h"
#endif
#if __has_include("Smaato_HyBidRewardedPresenter.h")
    #import "Smaato_HyBidRewardedPresenter.h"
#endif
#if __has_include("Smaato_HyBidRewardedPresenterFactory.h")
    #import "Smaato_HyBidRewardedPresenterFactory.h"
#endif
#if __has_include("Smaato_HyBidRewardedAd.h")
    #import "Smaato_HyBidRewardedAd.h"
#endif

#import "Smaato_HyBidBannerPresenterFactory.h"
#import "Smaato_HyBidRequestParameter.h"
#import "Smaato_HyBidAdRequest.h"
#import "Smaato_HyBidMRAIDServiceProvider.h"
#import "Smaato_HyBidMRAIDView.h"
#import "Smaato_HyBidMRAIDServiceDelegate.h"
#import "Smaato_HyBidAdPresenter.h"
#import "Smaato_HyBidAdPresenterFactory.h"
#import "Smaato_HyBidAdCache.h"
#import "Smaato_HyBidHeaderBiddingUtils.h"
#import "Smaato_HyBidContentInfoView.h"
#import "Smaato_HyBidUserDataManager.h"
#import "Smaato_HyBidBaseModel.h"
#import "Smaato_HyBidAdModel.h"
#import "Smaato_HyBidDataModel.h"
#import "Smaato_HyBidAd.h"
#import "Smaato_HyBidAdView.h"
#import "Smaato_HyBidStarRatingView.h"
#import "Smaato_HyBidViewabilityManager.h"
#import "Smaato_HyBidIntegrationType.h"
#import "Smaato_HyBidAdSize.h"
#import "Smaato_HyBidOpenRTBDataModel.h"
#import "Smaato_HyBidDiagnosticsManager.h"
#import "Smaato_HyBidError.h"
#import "Smaato_HyBidSignalDataProcessor.h"
#import "Smaato_HyBidAdImpression.h"
#import "Smaato_HyBidAdSourceConfig.h"
#import "Smaato_HyBidSkAdNetworkRequestModel.h"
#import "Smaato_HyBidSKAdNetworkParameter.h"
#import "Smaato_HyBidWebBrowserUserAgentInfo.h"
#import "Smaato_HyBidTimerState.h"
#import "Smaato_HyBidCustomCTAViewDelegate.h"
#import "Smaato_HyBidSKOverlay.h"
#import "Smaato_HyBidConfigModel.h"
#import "Smaato_HyBidConfig.h"
#import "Smaato_HyBidConfigManager.h"
#import "Smaato_NSUserDefaults+HyBidCustomMethods.h"
#import "Smaato_HyBidSKOverlayDelegate.h"

// For swift compatibility, we are making this file public instead of private
// Avoid using custom module map
#import "Smaato_PNLiteLocationManager.h"
#import "Smaato_PNLiteAdRequestModel.h"
#import "Smaato_HyBidVASTEventProcessor.h"
#import "Smaato_HyBidVASTImpression.h"
#import "Smaato_UIApplication+PNLiteTopViewController.h"
#import "Smaato_HyBidAdFeedbackViewDelegate.h"

@class HyBidTargetingModel;
@class HyBidReportingManager;
@class HyBidAdAttributionCustomClickAdsWrapper;

typedef NS_ENUM(NSInteger, SDKIntegrationType) {
    SDKIntegrationTypeHyBid = 0,
    SDKIntegrationTypeSmaato = 1
};

typedef enum {
    HyBidAudioStatusMuted,
    HyBidAudioStatusON,
    HyBidAudioStatusDefault
} HyBidAudioStatus;

typedef enum {
    HyBidLogLevelNone,
    HyBidLogLevelError,
    HyBidLogLevelWarning,
    HyBidLogLevelInfo,
    HyBidLogLevelDebug,
} HyBidLogLevel;

typedef enum {
    HB_CREATIVE,
    HB_ACTION_BUTTON
} HyBidInterstitialActionBehaviour;

typedef enum{
    HyBidAdImpressionTrackerRender,
    HyBidAdImpressionTrackerViewable
} HyBidImpressionTrackerMethod;

typedef enum {
    HyBidCustomEndcardDisplayExtention,
    HyBidCustomEndcardDisplayFallback
} HyBidCustomEndcardDisplayBehaviour;

typedef enum {
    HyBidWebBrowserNavigationExternal,
    HyBidWebBrowserNavigationInternal
} HyBidWebBrowserNavigation;

static NSString * const HyBidCustomEndcardDisplayExtentionValue = @"extension";
static NSString * const HyBidCustomEndcardDisplayFallbackValue = @"fallback";
static NSString * const HyBidAdExperiencePerformanceValue = @"performance";
static NSString * const HyBidAdExperienceBrandValue = @"brand";
static NSString * const HyBidWebBrowserNavigationExternalValue = @"external";
static NSString * const HyBidWebBrowserNavigationInternalValue = @"internal";

//PNLiteAssetGroupType
static const unsigned int MRAID_320x50 = 10;
static const unsigned int MRAID_300x50 = 12;
static const unsigned int MRAID_300x250 = 8;
static const unsigned int MRAID_320x480 = 21;
static const unsigned int MRAID_1024x768 = 22;
static const unsigned int MRAID_768x1024 = 23;
static const unsigned int MRAID_728x90 = 24;
static const unsigned int MRAID_160x600 = 25;
static const unsigned int MRAID_250x250 = 26;
static const unsigned int MRAID_300x600 = 27;
static const unsigned int MRAID_320x100 = 28;
static const unsigned int MRAID_480x320 = 29;
static const unsigned int VAST_MRECT = 4;
static const unsigned int VAST_INTERSTITIAL = 15;
static const unsigned int VAST_REWARDED = 15;
static const unsigned int NON_DEFINED = 0;

typedef void (^HyBidCompletionBlock)(BOOL);

@interface HyBid : NSObject

@property (nonatomic, assign) SDKIntegrationType sdkIntegrationType;

+ (void)setCoppa:(BOOL)enabled;
+ (void)setTargeting:(HyBidTargetingModel *)targeting;
+ (void)setTestMode:(BOOL)enabled;
+ (void)initWithAppToken:(NSString *)appToken completion:(HyBidCompletionBlock)completion;
+ (void)setLocationUpdates:(BOOL)enabled;
+ (void)setLocationTracking:(BOOL)enabled;
+ (void)setAppStoreAppID:(NSString *)appID DEPRECATED_MSG_ATTRIBUTE("You can safely remove this method from your integration.");
+ (NSString *)sdkVersion;
+ (BOOL)isInitialized;
+ (HyBidReportingManager *)reportingManager;
+ (NSString*)getSDKVersionInfo;
+ (NSString*)getCustomRequestSignalData;
+ (NSString*)getCustomRequestSignalData:(NSString*) mediationVendorName;
+ (void)setReporting:(BOOL)enabled;
+ (void)rightToBeForgotten;
+ (void)setIntegrationType:(SDKIntegrationType)integrationType;
+ (SDKIntegrationType)getIntegrationType;

@end
