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
#import <SmaatoSDKCore/SMAConfiguration.h>
#import <SmaatoSDKCore/SMALocation.h>
#import <SmaatoSDKCore/SmaatoSDKCore.h>
#import <Smaato_HyBid/Smaato_HyBid.h>

/**
 Initializes the SDK with the given configuration and with SmaatoSdkInitialisationDelegate  methods
 */
@protocol SmaatoSdkInitialisationDelegate <NSObject>

-(void)onInitialisationSuccess;
-(void)onInitialisationFailure: (NSString* _Nullable)errorMessage;

@end
/**
 The root class which provides the SDK configuration options.

 @warning   You must initialize the SDK by calling the \c initSDK: before using any SDK's API.
 */
@interface SmaatoSDK: NSObject

/// Version of the Smaato SDK.
@property (class, nonatomic, readonly, nonnull) NSString *sdkVersion;

/// Publisher Id assigned by Smaato.
@property (class, nonatomic, readonly, nonnull) NSString *publisherId;

@property (nonatomic, weak) id<SmaatoSdkInitialisationDelegate> _Nullable delegate;

/**
 Initializes the SDK with the given configuration.

 If \c config is \c nil, an NSInvalidArgumentException is raised. If called more than once \c NSGenericException is raised.

 @warning This method must be called prior to using any other APIs of the SDK.
 @param config      The SDK's configuration. Must not be \c nil.
 */
+ (void)initSDKWithConfig:(SMAConfiguration *_Nonnull)config;
/**
 Initializes the SDK with the given configuration.

 If \c config is \c nil, an NSInvalidArgumentException is raised. If called more than once \c NSGenericException is raised.

 @warning This method must be called prior to using any other APIs of the SDK.
 @param config      The SDK's configuration. Must not be \c nil.
 @param delegate The SDK's SmaatoSdkInitialisationDelegate
 */

+ (void)initSDKWithConfig:(SMAConfiguration *_Nonnull)config andDelegate:(id<SmaatoSdkInitialisationDelegate>_Nullable)delegate;

/**
 Unavailable. Please use class properties/methods instead.
 */
+ (null_unspecified instancetype)new NS_UNAVAILABLE;

/**
 Unavailable. Please use class properties/methods instead.
 */
- (null_unspecified instancetype)init NS_UNAVAILABLE;

@end

/**
 The following constants are provided by \c SmaatoSDK as possible user gender.
 */
typedef NS_ENUM(NSUInteger, SMAGender) {
    /// Unknown gender
    kSMAGenderUnknown = 0,
    /// Male gender
    kSMAGenderMale,
    /// Female gender
    kSMAGenderFemale,
    /// Other gender
    kSMAGenderOther
};

/**
 Collects user-related properties like age or location that can updated during application session.
 Specific rules applied when setting these properties and general information is provided for each property below.
 */
@interface SmaatoSDK (UserInfo)

/// User's gender.
/// The default value is \c kSMAGenderUnknown.
@property (class, nonatomic) SMAGender userGender;

/// Keywords/tags (free text, case insensitive) describing the content, e.g. "motorsport, news, cars".
/// The default value is \c nil.
@property (class, nonatomic, copy, nullable) NSString *userKeywords;

/// Query String: a search term entered by the user within the mobile app/site, e.g. "coffee, san+francisco".
/// The default value is \c nil.
@property (class, nonatomic, copy, nullable) NSString *userSearchQuery;

/// User's age.
/// The default value is \c nil.
@property (class, nonatomic, nullable) NSNumber *userAge;

/// User's location, which is used when SDK is not able to obtain latitude/longitude by itself.
/// The default value is \c nil.
@property (class, nonatomic, nullable) SMALocation *userLocation;

/// If the application has permission to use Core Location service, which the user has granted, then this flag allows to monitor/get user's
/// location by Smaato SDK automatically and put it inside ad requests. The default value is NO.
@property (class, nonatomic) BOOL gpsEnabled;

/// The region or state, the user is located in, e.g. "CA".
/// The default value is \c nil.
@property (class, nonatomic, copy, nullable) NSString *userRegion;

/// The postal code of the user's location, e.g. "94402".
/// The default value is \c nil.
@property (class, nonatomic, copy, nullable) NSString *userZipCode;

/// User's language in ISO 639-1 notation (e.g. "en"). Setting it to a non ISO 639-1 value, resets language to current device language,
/// which is the default value.
@property (class, nonatomic, copy, null_resettable) NSString *userLanguageCode;

/// Set to YES to indicate that your content should be treated as child-directed for purposes of COPPA.
/// The default value is \c NO.
@property (class, nonatomic) BOOL requireCoppaCompliantAds;

/// CCPA privacy string for California users. The string indicates optional user's agreement or disagreement
/// to pass private information (such as location or IDFA) to third-party providers.
@property (class, nonatomic, readonly, nullable) NSString *usPrivacyString;

/// Id assigned to the user by publisher. The id is subject to GDPR consent if in EU.
/// Default value is \c nil.
@property (class, nonatomic, copy, nullable) NSString *publisherProvidedIdentifier;

/// Set to YES to indicate that we have to apply LGPD restrictions.
/// The default value is \c NO.
@property (class, nonatomic, readonly) BOOL hasLGPD;

/// Set to YES to indicate that LGPD consent will added to all demands.
/// The default value is \c NO.
@property (class, nonatomic, nullable) NSNumber *isLGPDConsentEnabled;

/// Returns static informations about the SDK and settings as JSON-String
@property (class, nonatomic, readonly) NSString *_Nonnull collectSignals;

/// Set to YES to indicate that user has age restrictions.
/// The default value is \c NO.
@property (class, nonatomic) BOOL isAgeRestrictedUser;

@end

