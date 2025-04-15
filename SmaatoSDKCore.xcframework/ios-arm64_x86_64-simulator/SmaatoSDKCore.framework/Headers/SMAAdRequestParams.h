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
 Optional parameters for advanced ad requests.
*/
@interface SMAAdRequestParams: NSObject <NSCopying>

/// Unified Bidding unique identifier (see Smaato's Unified Bidding Publisher Setup (iOS))
@property (nonatomic, copy, nullable) NSString *ubUniqueId;

/**
 Dictionary that keeps additional data for the 3rd party ad networks. AdMob ad network is supported in-built. The supported extra objects
 are \c contentUrl (value type: NSString), \c testDevices (value type: NSArray<NSString>), \ctagForChildDirectedTreatment (value type:
 NSNumber withBool) , \c tagForUnderAgeOfConsent (value type: NSNumber withBool). All these parameters are passed to the AdMob request. In
 order to use this additional data inside AdMob request, pusblishers must create and pass a dictionary (key-value) where the key should be
 the property name and the value should be the data that needs to be passed to AdMob.
 */
@property (nonatomic, copy, nullable) NSDictionary *objectExtras;

/**
 An adapter class name from where ad request originates. Default is \c nil

 @warning       The parameter should only be passed when Smaato SDK is secondary.
 The parameter will serve as an additional information to Smaato if any prompt support should be required for your
 application.
 */
@property (nonatomic, nullable, copy) NSString *mediationNetworkName;

/**
 An adapter version number from where ad request originates. Default is \c nil

 @warning       The parameter should only be passed when Smaato SDK is secondary.
 The parameter will serve as an additional information to Smaato if any prompt support should be required for your
 application.
 */
@property (nonatomic, nullable, copy) NSString *mediationAdapterVersion;

/**
 Third party SDK version for mediated ads. Default is \c nil

 @warning       The parameter should only be passed when Smaato SDK is secondary.
 The parameter will serve as an additional information to Smaato if any prompt support should be required for your
 application.
 */
@property (nonatomic, nullable, copy) NSString *mediationNetworkSDKVersion;

/**
 Skip the end card when the video is skiped
 Default value: NO
 */
@property (nonatomic, assign) BOOL skipEndCardOnSkipVideo;

/**
 To check request for mediation network
 Default value: NO
 */
@property (nonatomic, assign) BOOL isMediation;

@end

