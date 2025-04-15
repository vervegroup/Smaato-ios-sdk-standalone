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

@class SMANativeAdAssets;
@protocol SMANativeView;

/**
\c SMANativeAdRenderer is public result of native ad request. It contains native raw data that can be rendered any time and any way. After
ad rendering publisher should register a view container with ad content for impression tracking and touches handling.
*/

@interface SMANativeAdRenderer: NSObject

/**
 Method to register ad view for impression tracking. A publisher has to call this method to enable rendered
 ad verification by NextGen SDK.

 @param containerView Parent view of UI controls that reflect native ad data. Must not be \c nil.

 @warning  Only after this method call Smaato starts to pay for native ad displaying.
 */
- (void)registerViewForImpression:(UIView *_Nonnull)containerView;

/**
 Method to register list of appointed view controls as valid for click handling. Publisher has to call this
 method to enable touch handling by NextGen SDK.

 @param activeViews List of touchable views. Must not be \c nil.

 @warning  General suggestion - register CTA button, main image, icon and title label.
 */
- (void)registerViewsForClickAction:(NSArray<UIView *> *_Nonnull)activeViews;

- (void)adMarkupViewWithCompletion:(void (^_Nullable)(UIView *_Nullable rmView))completion;

/**
 Init method
*/
- (instancetype _Nonnull)init;

@end

/**
\c SMANativeAdRenderer supports auto rendering of Native ad by NextGenSDK
*/
@interface SMANativeAdRenderer (AutoRendering)

/**
Call to render native ad inside custom view.

@param nativeView View with UI controls and placeholders for native ad rendering. \c nativeView should adopt
 \c SMANativeView protocol, which declares the UIKit controls naming for main components of native ad, as
 a contract between the app and NextGen SDK. Must not be \c nil.
*/
- (void)renderAdInView:(UIView<SMANativeView> *_Nonnull)nativeView
            completion:(void (^_Nullable)(BOOL isRendered, NSError *_Nullable error))completion;

@end

/**
\c SMANativeAdRenderer supports manual rendering of Native ad by publisher or another Ad Network, if there is
 an requrement or an intention to display ad to into custom UI cotrols
*/
@interface SMANativeAdRenderer (ManualRendering)

/**
 Native ad raw data (assets)
 */
@property (nonatomic, nonnull, readonly) SMANativeAdAssets *nativeAssets;

@end

/**
\c SMANativeAdRenderer supports 3rd party ad SDK and provides privacy icon view by demand
*/
@interface SMANativeAdRenderer (AdapterSupport)

/**
 Privacy icon view, that might be requested by Admob SDK
 */
@property (nonatomic, nullable, readonly) UIView *privacyView;

@end

