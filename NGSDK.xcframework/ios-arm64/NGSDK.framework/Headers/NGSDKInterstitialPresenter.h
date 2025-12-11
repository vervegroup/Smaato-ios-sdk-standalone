// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"
#import "NGSDKCustomCTAViewDelegate.h"
#import "NGSDKSKOverlayDelegate.h"

@class NGSDKInterstitialPresenter;
@class NGSDKAdSessionData;

@protocol NGSDKInterstitialPresenterDelegate<NSObject>

- (void)interstitialPresenterDidLoad:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidShow:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidClick:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidDismiss:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenter:(NGSDKInterstitialPresenter *)interstitialPresenter
             didFailWithError:(NSError *)error;

@optional
- (void)interstitialPresenterDidLoad:(NGSDKInterstitialPresenter *)interstitialPresenter viewController:(UIViewController *)viewController;
- (void)interstitialPresenterDidFinish:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidAppear:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidDisappear:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDismissesSKOverlay:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDismissesCustomCTA:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterWillPresentEndCard:(NGSDKInterstitialPresenter *)interstitialPresenter
                              skOverlayDelegate:(id<NGSDKSKOverlayDelegate>)skOverlayDelegate
                              customCTADelegate:(id<NGSDKCustomCTAViewDelegate>)customCTADelegate;
- (void)interstitialPresenterDidPresentCustomEndCard:(NGSDKInterstitialPresenter *)interstitialPresenter;
- (void)interstitialPresenterDidPresentCustomCTA;
- (void)interstitialPresenterDidClickCustomCTAOnEndCard:(BOOL)onEndCard;
- (void)interstitialPresenterDidSKOverlayAutomaticClick:(NGSDKInterstitialPresenter *)interstitialPresenter
                                              clickType:(NGSDKSKOverlayAutomaticCLickType)clickType;
- (void)interstitialPresenterDidStorekitAutomaticClick:(NGSDKInterstitialPresenter *)interstitialPresenter
                                             clickType:(NGSDKStorekitAutomaticClickType)clickType;
- (void)interstitialPresenterDidReplay:(NGSDKInterstitialPresenter *)interstitialPresenter viewController:(UIViewController *)viewController;

@end

@interface NGSDKInterstitialPresenter : NSObject

@property (nonatomic, readonly) NGSDKAd *ad;
@property (nonatomic) NSObject <NGSDKInterstitialPresenterDelegate> *delegate;
@property (nonatomic, weak) NSObject <NGSDKCustomCTAViewDelegate> *customCTADelegate;
@property (nonatomic, weak) NSObject <NGSDKSKOverlayDelegate> *skOverlayDelegate;
@property (nonatomic, strong) NGSDKAdSessionData *adSessionData;

- (void)load;

/// Presents the interstitial ad modally from the current view controller.
- (void)show;

/**
 * Presents the interstitial ad modally from the specified view controller.
 *
 * @param viewController The view controller that should be used to present the interstitial ad.
 */
- (void)showFromViewController:(UIViewController *)viewController;

- (void)hideFromViewController:(UIViewController *)viewController;

@end
