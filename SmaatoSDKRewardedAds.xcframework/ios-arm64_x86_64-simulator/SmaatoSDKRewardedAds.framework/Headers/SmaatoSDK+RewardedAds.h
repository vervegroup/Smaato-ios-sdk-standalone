//
//  Copyright © 2021 PubNative. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import <Foundation/Foundation.h>
#import <SmaatoSDKCore/SmaatoSDK.h>
#import <SmaatoSDKRewardedAds/SMARewardedInterstitial.h>

@class SMAAdRequestParams;
@class SmaatoRewardedDelegateHelper;

@interface SmaatoSDK (RewardedAds)

/**
 Requests Rewarded Interstitial Ad. Any useful info about Rewarded Interstitial Ad
 loading could be tracked through of \c SMARewardedInterstitialDelegate callback
 methods.&nbsp; In the case of successful Rewarded Interstitial Ad loading you can call
 \c showFromViewController: method of \c SMARewardedInterstitial object to show
 Rewarded Interstitial Ad as presented view controller.&nbsp; In the case of an
 error you should investigate the reasons of the issue (console logs, NSError
 details) and request new Rewarded Interstitial Ad after some time interval to prevent
 running into request frequency cap situation.

 @warning \c SMARewardedInterstitial result object has own TTL (time-to-live) of about
 5 minutes after downloading, when this rewardedInterstitial Ad could be shown. After this time
 the Rewarded Interstitial Ad is marked as expired and will not be displayed and paid.
 You have to request the new one again.

 @param adSpaceId    Smaato ad space id
 @param delegate     Delegate of \c SMARewardedInterstitial to get the information
 about important rewardedInterstitial ad events
 */

+ (void)loadRewardedInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId delegate:(id<SMARewardedInterstitialDelegate> _Nonnull)delegate;

/**
 Advanced version of `loadRewardedInterstitialForAdSpaceId:delegate:` method for ad experts

 @param adSpaceId       Smaato ad space id
 @param delegate        Delegate of \c SMARewardedInterstitial to get the information
 @param requestParams   Ad request optional parameters for Unified Bidding or Mediation Network support
 */
+ (void)loadRewardedInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId
                                    delegate:(id<SMARewardedInterstitialDelegate> _Nonnull)delegate
                               requestParams:(SMAAdRequestParams *_Nullable)requestParams;

@end
