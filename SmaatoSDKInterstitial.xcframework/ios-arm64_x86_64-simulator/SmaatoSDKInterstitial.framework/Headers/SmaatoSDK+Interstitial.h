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
#import <SmaatoSDKInterstitial/SMAInterstitial.h>
#import <SmaatoSDKCore/SmaatoSDK.h>

@class SMAAdRequestParams;

@interface SmaatoSDK (Interstitial)

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
