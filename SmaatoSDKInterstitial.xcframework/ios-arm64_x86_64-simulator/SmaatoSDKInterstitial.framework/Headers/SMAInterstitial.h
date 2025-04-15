//
//  SMAInterstitial.h
//  SmaatoSDKInterstitial
//
//  Created by Smaato Inc on 20/04/2018.
//  Copyright © 2018 Smaato Inc. All rights reserved.￼
//  Licensed under the Smaato SDK License Agreement￼
//  https://www.smaato.com/sdk-license-agreement/
//

#import <UIKit/UIKit.h>

@class SMAInterstitial;
@class SMAAdRequestParams;
@class HyBidInterstitialAd;
/**
 The delegate of a \c SMAInterstitial object must adopt the \c SMAInterstitialDelegate protocol to get callbacks about Interstitial Ad
 events.
 */
@protocol SMAInterstitialDelegate <NSObject>

@required

/**
 Interstitial has been loaded successfully and is ready to be shown.
 */
- (void)interstitialDidLoad:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial did fail to load. An error contains detailed description of the issue.
 */
- (void)interstitial:(SMAInterstitial *_Nullable)interstitial didFailWithError:(NSError *_Nonnull)error;

/**
 Interstitial has not been shown and expired. A new interstitial ad should be loaded by publisher request.
 */
- (void)interstitialDidTTLExpire:(SMAInterstitial *_Nonnull)interstitial;

@optional

/**
 Interstitial is presented on screen and got \c viewWillAppear: callback.
 */
- (void)interstitialWillAppear:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial is presented on screen and got \c viewDidAppear: callback.
 */
- (void)interstitialDidAppear:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial is dismissed from screen and got \c viewWillDisappear: callback.
 */
- (void)interstitialWillDisappear:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial is dismissed from screen and got \c viewDidDisappear: callback.
 */
- (void)interstitialDidDisappear:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial has been clicked.
 */
- (void)interstitialDidClick:(SMAInterstitial *_Nonnull)interstitial;

/**
 Interstitial will cause user to leave the application.
 */
- (void)interstitialWillLeaveApplication:(SMAInterstitial *_Nonnull)interstitial;

@end

/**
 \c SMAInterstitial class encapsulates public properties and methods for Interstitial Ad management. An instance of \c SMAInterstitial class
 could be obtained over invocation of \c loadInterstitialForPublisherId:adSpaceId:delegate: static method of main \c SmaatoSDK class.
 */
@interface SMAInterstitial: NSObject


@property (nonatomic, weak) id<SMAInterstitialDelegate> delegate;

@property (nonatomic, strong) HyBidInterstitialAd * _Nonnull interstitialAd;

/**
 Registered adSpaceId (assigned by Smaato in SPX dashboard).
 */
@property (nonatomic, readonly, copy, nonnull) NSString *adSpaceId;

/**
 Flag marks the interstitial as ready to be shown.
 */
@property (nonatomic, assign, readonly) BOOL availableForPresentation;

/**
 Background color to be used for the presenting view controller. Black by default.
 */
@property (nonatomic, null_resettable, copy) UIColor *backgroundColor;

/**
 Sets the alpha value of the presenting view's background
 Default value: 1
 */
@property (nonatomic, assign) CGFloat alpha;

/**
 Smaato Creative Id.

 @warning   The value is only available after the ad has been received successfully. If fetched before, returns \c nil.
 */
@property (nonatomic, readonly, nullable) NSString *sci;

/**
 Session Id assigned by Smaato to the ad object.

 @warning   The value is only available after the ad has been received successfully. If fetched before, returns \c nil.
 */
@property (nonatomic, readonly, nullable) NSString *sessionId;

/**
 Show interstitial ad on modal view controller from any parent view controller.

 @param viewController  UIViewController for presentation
 */
- (void)showFromViewController:(UIViewController *_Nonnull)viewController;

/**
 Call `[SmaatoSDK loadInterstitialForAdSpaceId:delegate:]` instead.
 */
+ (null_unspecified instancetype)new NS_UNAVAILABLE;

/**
 Call `[SmaatoSDK loadInterstitialForAdSpaceId:delegate:]` instead.
 */
- (null_unspecified instancetype)init NS_UNAVAILABLE;

/**
 Request fullscreen, interstitial ad. Any useful info about ad loading could be tracked through of \c SMAInterstitialDelegate methods.&nbsp;
 In the case of successfully loaded ad, you can call \c showFromViewController: method of \c SMAInterstitial object to show the ad.&nbsp;
 In the case of an error you should investigate the reasons of the issue (console logs, NSError details),
 and request new ad after some time interval to prevent running into request frequency cap situation.

 @param adSpaceId    Smaato ad space id
 @param delegate     Delegate object to get the information about important interstitial ad events
 */
+ (void)loadInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId delegate:(id<SMAInterstitialDelegate> _Nonnull)delegate;

/**
 Advanced version of `loadInterstitialForAdSpaceId:delegate:` method for ad experts

 @param adSpaceId       Smaato ad space id
 @param delegate        Delegate object to get the information about important interstitial ad events
 @param requestParams   Ad request optional parameters for Unified Bidding or Mediation Network support
 */
+ (void)loadInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId
                            delegate:(id<SMAInterstitialDelegate> _Nonnull)delegate
                       requestParams:(SMAAdRequestParams *_Nullable)requestParams;

@end
