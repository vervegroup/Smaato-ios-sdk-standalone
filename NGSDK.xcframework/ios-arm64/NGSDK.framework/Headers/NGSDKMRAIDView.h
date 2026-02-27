// 
// NGSDK SDK License
//
//

#import <UIKit/UIKit.h>
#import "NGSDKContentInfoView.h"
#import "NGSDKAd.h"

@class NGSDKMRAIDView;
@protocol NGSDKMRAIDServiceDelegate;

// A delegate for MRAIDView to listen for notification on ad ready or expand related events.
@protocol NGSDKMRAIDViewDelegate <NSObject>

@optional

// These callbacks are for basic banner ad functionality.
- (void)mraidViewAdReady:(NGSDKMRAIDView *)mraidView;
- (void)mraidViewAdFailed:(NGSDKMRAIDView *)mraidView;
- (void)mraidViewAdFailed:(NGSDKMRAIDView *)mraidView withError:(NSError *)error;
- (void)mraidViewWillExpand:(NGSDKMRAIDView *)mraidView;
- (void)mraidViewDidClose:(NGSDKMRAIDView *)mraidView;
- (void)mraidViewNavigate:(NGSDKMRAIDView *)mraidView withURL:(NSURL *)url;
- (void)mraidViewWillShowEndCard:(NGSDKMRAIDView *)mraidView
                 isCustomEndCard:(BOOL)isCustomEndCard
               skOverlayDelegate:(id<NGSDKSKOverlayDelegate>)skOverlayDelegate;
- (void)mraidViewDidPresentCustomEndCard:(NGSDKMRAIDView *)mraidView;
- (void)mraidViewAutoStoreKitDidShowWithClickType:(NGSDKStorekitAutomaticClickType)clickType;
- (void)mraidViewDidShowSKOverlayWithClickType:(NGSDKSKOverlayAutomaticCLickType)clickType;

// This callback is to ask permission to resize an ad.
- (BOOL)mraidViewShouldResize:(NGSDKMRAIDView *)mraidView toPosition:(CGRect)position allowOffscreen:(BOOL)allowOffscreen;

@end

@interface NGSDKMRAIDView : UIView <NGSDKSKOverlayDelegate>

@property (nonatomic, strong) id<NGSDKMRAIDViewDelegate> delegate;
@property (nonatomic, strong) id<NGSDKMRAIDServiceDelegate> serviceDelegate;
@property (nonatomic, weak, setter = setRootViewController:) UIViewController *rootViewController;
// DEPRECATED: isViewable is deprecated as from MRAID 3.0
@property (nonatomic, assign, getter = isViewable, setter = setIsViewable:) BOOL isViewable;
@property (nonatomic, strong) NSString *urlStringForEndCardTracking;

// IMPORTANT: This is the only valid initializer for an MRAIDView; -init and -initWithFrame: will throw exceptions
- (id)initWithFrame:(CGRect)frame
       withHtmlData:(NSString *)htmlData
        withBaseURL:(NSURL *)bsURL
             withAd:(NGSDKAd *)ad
  supportedFeatures:(NSArray *)features
      isInterstital:(BOOL)isInterstitial
       isScrollable:(BOOL)isScrollable
           delegate:(id<NGSDKMRAIDViewDelegate>)delegate
    serviceDelegate:(id<NGSDKMRAIDServiceDelegate>)serviceDelegate
 rootViewController:(UIViewController *)rootViewController
        contentInfo:(NGSDKContentInfoView *)contentInfo
         skipOffset:(NSInteger)skipOffset
          isEndcard:(BOOL)isEndcard
shouldHandleInterruptions:(BOOL)shouldHandleInterruptions;

- (void)cancel;

/// Helper method that presents the interstitial ad modally from the current view controller.
- (void)showAsInterstitial;

/**
* Helper method that presents the interstitial ad modally from the specified view controller.
*
* @param viewController The view controller that should be used to present the interstitial ad.
*/
- (void)showAsInterstitialFromViewController:(UIViewController *)viewController;
- (void)hide;
- (void)stopAdSession;
- (void)startAdSession;
// These methods provide the means for native code to talk to JavaScript code.
- (void)injectJavaScript:(NSString *)js;
- (nullable UIView *)modalView;
@end
