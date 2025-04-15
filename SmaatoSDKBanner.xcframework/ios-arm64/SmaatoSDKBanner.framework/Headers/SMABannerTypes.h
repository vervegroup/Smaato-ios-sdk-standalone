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

/**
 Banner sizes currently supported by the SDK.
 */
typedef NS_ENUM(NSUInteger, SMABannerAdSize) {
    /** Any size */
    kSMABannerAdSizeAny,
    /** XXLarge (320x50) */
    kSMABannerAdSizeXXLarge_320x50,
    /** Medium Rectangle (300x250) */
    kSMABannerAdSizeMediumRectangle_300x250,
    /** Leaderboard (728x90) */
    kSMABannerAdSizeLeaderboard_728x90,
    /** Skyscraper (120x600) */
    kSMABannerAdSizeSkyscraper_120x600,
};

/**
 Banner autoreload interval.
 */
typedef NS_ENUM(NSInteger, SMABannerAutoreloadInterval) {
    /** Disabled */
    kSMABannerAutoreloadIntervalDisabled = -1,
    /** Default autoreload time interval. */
    kSMABannerAutoreloadIntervalDefault = 0,
    /** Very short time interval, approximately 10 seconds. */
    kSMABannerAutoreloadIntervalVeryShort = 1,
    /** Short time interval, approximately 30 seconds. */
    kSMABannerAutoreloadIntervalShort = 2,
    /** Normal time interval, approximately 60 seconds. */
    kSMABannerAutoreloadIntervalNormal = 3,
    /** Long time interval, approximately 120 seconds. */
    kSMABannerAutoreloadIntervalLong = 4,
    /** Very long time interval, approximately 240 seconds. */
    kSMABannerAutoreloadIntervalVeryLong = 5,
};
