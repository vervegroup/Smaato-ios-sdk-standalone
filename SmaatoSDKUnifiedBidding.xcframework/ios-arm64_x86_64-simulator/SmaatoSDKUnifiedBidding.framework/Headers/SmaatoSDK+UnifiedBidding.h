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

#import <UIKit/UIKit.h>
#import <SmaatoSDKCore/SmaatoSDK.h>
/**
 Banner sizes supported in the SDK
 */
typedef NS_ENUM(NSUInteger, SMAUbBannerSize) {
    /**  XXLarge (320x50) banner*/
    kSMAUbBannerSizeXXLarge_320x50 = 0,
    /** Medium Rectangle (300*250) banner */
    kSMAUbBannerSizeMediumRectangle_300x250,
    /** Skyscraper (120x600) banner*/
    kSMAUbBannerSizeSkyscraper_120x600,
    /** Leaderboard (728x90) banner*/
    kSMAUbBannerSizeLeaderboard_728x90
};

@interface SMAUbBid: NSObject
/**
 Adjusted bid price on the base of the chosen granularity of ad displaying
 */
@property (nonatomic, readonly) CGFloat bidPrice;

/**
 Optional helper method builds keyword for Mopub LineItem in a format "smaato_cpm:X.XX",
 where X.XX is adjusted bid price for LineItem.
 Mopub best practice:
 A publisher can use bidPrice to create own Prebid (target) keyword for Mopub.
 */
@property (nonatomic, copy, readonly, nonnull) NSString *targetPrebidKeyword;

/**
 Optional helper method provides metadata dictionary that allows to fetch related ad creative in case
 of bid prices auction win.
 Mopub best practice:
 A publisher should pass this data to `localExtras` property of Mopub `MPAdView` instance.
 */
@property (nonatomic, copy, readonly, nonnull) NSDictionary *metaData;

+ (null_unspecified instancetype)new NS_UNAVAILABLE;
- (null_unspecified instancetype)init NS_UNAVAILABLE;

@end

@interface SmaatoSDK (UnifiedBidding)

/**
 The method sends prebid request for Banner Smaato ads

 @param adSpaceId       AdspaceId identifier assigned by Smaato. Unified Bidding support should be enabled for this AdspaceId in Smaato SPX.
                        Must not be \c nil
 @param bannerSize      The banner size to be returned. see \c SMAUbBannerSize
 @param completion      Callback is invoked, when prebid response processing has been finished.
                        `bid` or `error` values reflect state of Prebid request. Must not be \c nil.
 */
+ (void)prebidBannerForAdSpaceId:(NSString *_Nonnull)adSpaceId
                      bannerSize:(SMAUbBannerSize)bannerSize
                      completion:(void (^_Nonnull)(SMAUbBid *_Nullable bid, NSError *_Nullable error))completion;

/**
 The method sends prebid request for Interstitial Smaato ads

 @param adSpaceId       AdspaceId identifier assigned by Smaato. Unified Bidding support should be enabled for this AdspaceId in Smaato SPX.
                        Must not be \c nil
 @param completion      Callback is invoked, when prebid response processing has been finished.
                        `bid` or `error` values reflect state of Prebid request. Must not be \c nil.
 */
+ (void)prebidInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId
                            completion:(void (^_Nonnull)(SMAUbBid *_Nullable bid, NSError *_Nullable error))completion;

/**
 The method sends prebid request for Rewarded Interstitial Smaato ads

 @param adSpaceId       AdspaceId identifier assigned by Smaato. Unified Bidding support should be enabled for this AdspaceId in Smaato SPX.
                        Must not be \c nil
 @param completion      Callback is invoked, when prebid response processing has been finished.
                        `bid` or `error` values reflect state of Prebid request. Must not be \c nil.
 */
+ (void)prebidRewardedInterstitialForAdSpaceId:(NSString *_Nonnull)adSpaceId
                                    completion:(void (^_Nonnull)(SMAUbBid *_Nullable bid, NSError *_Nullable error))completion;

/**
 The method sends prebid request for Outstream Smaato ads

 @param adSpaceId               AdspaceId identifier assigned by Smaato. Unified Bidding support should be enabled for this AdspaceId in Smaato SPX.
                            Must not be \c nil
 @param bannerSize       The banner size to be returned. see \c SMAUbBannerSize. Must not be \c nil
 @param completion              Callback is invoked, when prebid response processing has been finished.
                            `bid` or `error` values reflect state of Prebid request. Must not be \c nil.
 */
+ (void)prebidOutstreamForAdSpaceId:(NSString *_Nonnull)adSpaceId
                         bannerSize:(SMAUbBannerSize)bannerSize
                         completion:(void (^_Nonnull)(SMAUbBid *_Nullable, NSError *_Nullable))completion;

/**
 The method sends prebid request for Native Smaato ads

 @param adSpaceId       AdspaceId identifier assigned by Smaato. Unified Bidding support should be enabled for this AdspaceId in Smaato SPX.
                        Must not be \c nil
 @param completion      Callback is invoked, when prebid response processing has been finished.
                        `bid` or `error` values reflect state of Prebid request. Must not be \c nil.
 */
+ (void)prebidNativeForAdSpaceId:(NSString *_Nonnull)adSpaceId completion:(void (^_Nonnull)(SMAUbBid *_Nullable, NSError *_Nullable))completion;

@end

@interface SMANSNumberFormatter: NSObject

+ (NSString *_Nullable)roundDownNumber:(NSNumber *_Nullable)number toFractionalDigits:(NSUInteger)fractionalDigits;
+ (NSString *_Nullable)stringRepresentationNumber:(NSNumber *_Nullable)number withFractionalDigits:(NSUInteger)fractionalDigits;

@end

