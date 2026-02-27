// 
// NGSDK SDK License
//
//

#import <UIKit/UIKit.h>

//! Project version number for NGSDK.
FOUNDATION_EXPORT double NGSDKVersionNumber;

//! Project version string for NGSDK.
FOUNDATION_EXPORT const unsigned char NGSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import "PublicHeader.h"

//Banner module headers
#if __has_include("NGSDKLeaderboardAdRequest.h")
    #import "NGSDKLeaderboardAdRequest.h"
#endif
#if __has_include("NGSDKBannerAdRequest.h")
    #import "NGSDKBannerAdRequest.h"
#endif
#if __has_include("NGSDKLeaderboardPresenterFactory.h")
    #import "NGSDKLeaderboardPresenterFactory.h"
#endif
#if __has_include("NGSDKLeaderboardAdView.h")
    #import "NGSDKLeaderboardAdView.h"
#endif
#if __has_include("NGSDKBannerAdView.h")
    #import "NGSDKBannerAdView.h"
#endif
#if __has_include("NGSDKMRectAdRequest.h")
    #import "NGSDKMRectAdRequest.h"
#endif
#if __has_include("NGSDKMRectPresenterFactory.h")
    #import "NGSDKMRectPresenterFactory.h"
#endif
#if __has_include("NGSDKMRectAdView.h")
    #import "NGSDKMRectAdView.h"
#endif

//Native module headers
#if __has_include("NGSDKNativeAdLoader.h")
    #import "NGSDKNativeAdLoader.h"
#endif
#if __has_include("NGSDKNativeAd.h")
    #import "NGSDKNativeAd.h"
#endif
#if __has_include("NGSDKNativeAdRenderer.h")
    #import "NGSDKNativeAdRenderer.h"
#endif

//FullScreen Module headers
#if __has_include("NGSDKInterstitialAdRequest.h")
    #import "NGSDKInterstitialAdRequest.h"
#endif
#if __has_include("NGSDKInterstitialPresenter.h")
    #import "NGSDKInterstitialPresenter.h"
#endif
#if __has_include("NGSDKInterstitialPresenterFactory.h")
    #import "NGSDKInterstitialPresenterFactory.h"
#endif
#if __has_include("NGSDKInterstitialAd.h")
    #import "NGSDKInterstitialAd.h"
#endif

//Rewarded video Module headers
#if __has_include("NGSDKRewardedAdRequest.h")
    #import "NGSDKRewardedAdRequest.h"
#endif
#if __has_include("NGSDKRewardedPresenter.h")
    #import "NGSDKRewardedPresenter.h"
#endif
#if __has_include("NGSDKRewardedPresenterFactory.h")
    #import "NGSDKRewardedPresenterFactory.h"
#endif
#if __has_include("NGSDKRewardedAd.h")
    #import "NGSDKRewardedAd.h"
#endif

#import "NGSDKBannerPresenterFactory.h"
#import "NGSDKRequestParameter.h"
#import "NGSDKAdRequest.h"
#import "NGSDKMRAIDServiceProvider.h"
#import "NGSDKMRAIDView.h"
#import "NGSDKMRAIDServiceDelegate.h"
#import "NGSDKAdPresenter.h"
#import "NGSDKAdPresenterFactory.h"
#import "NGSDKAdCache.h"
#import "NGSDKHeaderBiddingUtils.h"
#import "NGSDKContentInfoView.h"
#import "NGSDKUserDataManager.h"
#import "NGSDKBaseModel.h"
#import "NGSDKAdModel.h"
#import "NGSDKDataModel.h"
#import "NGSDKAd.h"
#import "NGSDKAdView.h"
#import "NGSDKStarRatingView.h"
#import "NGSDKViewabilityManager.h"
#import "NGSDKIntegrationType.h"
#import "NGSDKAdSize.h"
#import "NGSDKOpenRTBDataModel.h"
#import "NGSDKDiagnosticsManager.h"
#import "NGSDKError.h"
#import "NGSDKSignalDataProcessor.h"
#import "NGSDKAdImpression.h"
#import "NGSDKAdSourceConfig.h"
#import "NGSDKSkAdNetworkRequestModel.h"
#import "NGSDKSKAdNetworkParameter.h"
#import "NGSDKWebBrowserUserAgentInfo.h"
#import "NGSDKTimerState.h"
#import "NGSDKCustomCTAViewDelegate.h"
#import "NGSDKSKOverlay.h"
#import "NGSDKConfigModel.h"
#import "NGSDKConfig.h"
#import "NGSDKConfigManager.h"
#import "NSUserDefaults+NGSDKCustomMethods.h"
#import "NGSDKSKOverlayDelegate.h"
#import "ATOMManager.h"

// For swift compatibility, we are making this file public instead of private
// Avoid using custom module map
#import "NGSDKLocationManager.h"
#import "NGSDKAdRequestModel.h"
#import "NGSDKVASTEventProcessor.h"
#import "NGSDKVASTImpression.h"
#import "UIApplication+NGSDKTopViewController.h"
#import "NGSDKAdFeedbackViewDelegate.h"
#import "NGSDKBeaconsInspectorHelper.h"

@class NGSDKTargetingModel;
@class NGSDKReportingManager;
@class NGSDKAdAttributionCustomClickAdsWrapper;

typedef NS_ENUM(NSInteger, SDKIntegrationType) {
    SDKIntegrationTypeNGSDK = 0,
    SDKIntegrationTypeSmaato = 1
};

typedef enum {
    NGSDKAudioStatusMuted,
    NGSDKAudioStatusON,
    NGSDKAudioStatusDefault
} NGSDKAudioStatus;

typedef enum {
    NGSDKLogLevelNone,
    NGSDKLogLevelError,
    NGSDKLogLevelWarning,
    NGSDKLogLevelInfo,
    NGSDKLogLevelDebug,
} NGSDKLogLevel;

typedef enum {
    HB_CREATIVE,
    HB_ACTION_BUTTON
} NGSDKInterstitialActionBehaviour;

typedef enum{
    NGSDKAdImpressionTrackerRender,
    NGSDKAdImpressionTrackerViewable
} NGSDKImpressionTrackerMethod;

typedef enum {
    NGSDKCustomEndcardDisplayExtention,
    NGSDKCustomEndcardDisplayFallback
} NGSDKCustomEndcardDisplayBehaviour;

typedef enum {
    NGSDKWebBrowserNavigationExternal,
    NGSDKWebBrowserNavigationInternal
} NGSDKWebBrowserNavigation;

static NSString * const NGSDKCustomEndcardDisplayExtentionValue = @"extension";
static NSString * const NGSDKCustomEndcardDisplayFallbackValue = @"fallback";
static NSString * const NGSDKAdExperiencePerformanceValue = @"performance";
static NSString * const NGSDKAdExperienceBrandValue = @"brand";
static NSString * const NGSDKWebBrowserNavigationExternalValue = @"external";
static NSString * const NGSDKWebBrowserNavigationInternalValue = @"internal";

//NGSDKAssetGroupType
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

typedef void (^NGSDKCompletionBlock)(BOOL);

@interface NGSDK : NSObject

@property (nonatomic, assign) SDKIntegrationType sdkIntegrationType;

+ (void)setCoppa:(BOOL)enabled;
+ (void)setTargeting:(NGSDKTargetingModel *)targeting;
+ (void)setTestMode:(BOOL)enabled;
+ (void)initWithAppToken:(NSString *)appToken completion:(NGSDKCompletionBlock)completion;
+ (void)setLocationUpdates:(BOOL)enabled;
+ (void)setLocationTracking:(BOOL)enabled;
+ (void)setAppStoreAppID:(NSString *)appID DEPRECATED_MSG_ATTRIBUTE("You can safely remove this method from your integration.");
+ (NSString *)sdkVersion;
+ (BOOL)isInitialized;
+ (NGSDKReportingManager *)reportingManager;
+ (NSString*)getSDKVersionInfo;
+ (NSString*)getCustomRequestSignalData;
+ (NSString*)getCustomRequestSignalData:(NSString*) mediationVendorName;
+ (NSString*)getEncodedCustomRequestSignalData;
+ (NSString*)getEncodedCustomRequestSignalData:(NSString*) mediationVendorName;
+ (void)setReporting:(BOOL)enabled;
+ (void)rightToBeForgotten;
+ (void)setIntegrationType:(SDKIntegrationType)integrationType;
+ (SDKIntegrationType)getIntegrationType;

@end
