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
 Logging levels supported by Smaato SDK
 */
typedef NS_ENUM(NSInteger, SMALogLevel) {
    /** Error-level messages are intended for reporting errors */
    kSMALogLevelError = 0,
    /** Event which may cause an error */
    kSMALogLevelWarning = 1,
    /** Message that may be helpful, but isn’t essential */
    kSMALogLevelInfo = 2,
    /** Used in a development environment */
    kSMALogLevelDebug = 3,
    /** Generally used only as a last resort when debugging a difficult problem
     (example: local variables within an algorithm implementation */
    kSMALogLevelVerbose = 4,
    /** Default log level */
    kSMALogLevelDefault = kSMALogLevelInfo,
};

/**
 The following constants are provided by \c SMAConfiguration to communicate the max allowed age rating creative classification.
 */
typedef NS_ENUM(NSUInteger, SMAMaxAdContentRating) {
    /// Undefined, Age not set
    kSMAMaxAdContentRatingUndefined = 0,
    /// Age < 9
    kSMAMaxAdContentRatingG,
    /// Age >= 9 and Age < 13
    kSMAMaxAdContentRatingPG,
    /// Age >= 13 and Age < 18
    kSMAMaxAdContentRatingT,
    /// Age >= 18
    kSMAMaxAdContentRatingMA,
};

/**
 A configuration that is used to initialize the SDK.
 */
@interface SMAConfiguration: NSObject

/**
 Set this flag to YES to require secure creatives.
 Secure creative is a creative for which responses have links with HTTPS scheme only and links that redirect to HTTPS only.

 Default value is reflecting ATS settings (true when ATS is enabled, false otherwise), when \c httpsOnly accessor is called before setter.
 In such case, setting \c httpsOnly to different value is not possible anymore.

 @note Setting this flag may get overridden because of your application's Application Transport Security settings,
       so if ATS is enabled and you set this flag to NO, the final value of flag will be YES.
       Alternatively, setting this flag to YES or NO, while ATS is disabled, will be respected.
 */
@property (nonatomic) BOOL httpsOnly;

/**
 If this property is not changed, default logging level is \c kSMALogLevelInfo
 */
@property (nonatomic) SMALogLevel logLevel;

/**
 Set this property to YES if you want to disable log messages from SDK
 */
@property (nonatomic) BOOL loggingDisabled;

/**
 The max allowed age rating creative classification.
 The default value is \c kSMAMaxAdContentRatingUndefined.
 */
@property (nonatomic) SMAMaxAdContentRating maxAdContentRating;

/**
 Publisher identifier assigned by Smaato.
 */
@property (nonatomic, readonly, nonnull) NSString *publisherId;


/**
 Set this property to YES if you not want the SDK to track app foreground sessions.
 */
@property (nonatomic) BOOL disableSessionTracking;

/**
 private
 */

/**
 Creates a configuration object initialized with the specified publisherId.

 @param publisherId     Publisher identifier assigned by Smaato.

 @return                A configuration object initialized with the specified publisherId.
 */

- (null_unspecified instancetype)initWithPublisherId:(NSString *_Nonnull)publisherId NS_DESIGNATED_INITIALIZER;

/**
 Unavailable. Please use class properties/methods instead.
 */
+ (null_unspecified instancetype)new NS_UNAVAILABLE;

/**
 Unavailable. Please use class properties/methods instead.
 */
- (null_unspecified instancetype)init NS_UNAVAILABLE;

@end
