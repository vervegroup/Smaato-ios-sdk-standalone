// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"
#import "NGSDKCustomCTAViewDelegate.h"
#import "NGSDKSKOverlay.h"
#import "NGSDKSKOverlayDelegate.h"

@class NGSDKRewardedPresenter;
@class NGSDKAdSessionData;

@protocol NGSDKRewardedPresenterDelegate<NSObject>

- (void)rewardedPresenterDidLoad:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidShow:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidClick:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidDismiss:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidFinish:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenter:(NGSDKRewardedPresenter *)rewardedPresenter
             didFailWithError:(NSError *)error;

@optional
- (void)rewardedPresenterDidLoad:(NGSDKRewardedPresenter *)rewardedPresenter viewController:(UIViewController *)viewController;
- (void)rewardedPresenterDidAppear:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidDisappear:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDismissesSKOverlay:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDismissesCustomCTA:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenteWillPresentEndCard:(NGSDKRewardedPresenter *)rewardedPresenter
                         skOverlayDelegate:(id<NGSDKSKOverlayDelegate>)skOverlayDelegate
                         customCTADelegate:(id<NGSDKCustomCTAViewDelegate>)customCTADelegate;
- (void)rewardedPresenterDidClickCustomCTAOnEndCard:(BOOL)OnEndCard;
- (void)rewardedPresenterDidPresentsCustomCTA;
- (void)rewardedPresenterDidPresentCustomEndCard:(NGSDKRewardedPresenter *)rewardedPresenter;
- (void)rewardedPresenterDidSKOverlayAutomaticClick:(NGSDKRewardedPresenter *)rewardedPresenter
                                              clickType:(NGSDKSKOverlayAutomaticCLickType)clickType;
- (void)rewardedPresenterDidStorekitAutomaticClick:(NGSDKRewardedPresenter *)rewardedPresenter
                                              clickType:(NGSDKStorekitAutomaticClickType)clickType;
- (void)rewardedPresenterDidReplay:(NGSDKRewardedPresenter *)rewardedPresenter viewController:(UIViewController *)viewController;

@end

@interface NGSDKRewardedPresenter : NSObject

@property (nonatomic, readonly) NGSDKAd *ad;
@property (nonatomic) NSObject <NGSDKRewardedPresenterDelegate> *delegate;
@property (nonatomic) NSObject <NGSDKCustomCTAViewDelegate> *customCTADelegate;
@property (nonatomic) NSObject <NGSDKSKOverlayDelegate> *skOverlayDelegate;
@property (nonatomic, strong) NGSDKAdSessionData *adSessionData;

- (void)load;

/// Presents the rewarded ad modally from the current view controller.
- (void)show;

/**
 * Presents the rewarded ad modally from the specified view controller.
 *
 * @param viewController The view controller that should be used to present the rewarded ad.
 */
- (void)showFromViewController:(UIViewController *)viewController;
- (void)hideFromViewController:(UIViewController *)viewController;

@end
