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

@class SMANativeImage;

/**
\c SMANativeAdAssets class contains raw data (values) from Native ad response.
*/
@interface SMANativeAdAssets: NSObject

/**
Text\string that should be rendered as main text (or description) on view with native ad
*/
@property (nonatomic, copy, readonly, nullable) NSString *mainText;

/**
Text\string that should be rendered as title on view with native ad
*/
@property (nonatomic, copy, readonly, nullable) NSString *title;

/**
Text\string that should be rendered as special label\mark about ads content
*/
@property (nonatomic, copy, readonly, nullable) NSString *sponsored;

/**
Text\string that should be rendered as text of Click-To-Action button on view with native ad
*/
@property (nonatomic, copy, readonly, nullable) NSString *cta;

/**
List of image creative URLs (up to 3)  that should be rendered as main (large) image control(s) on view with native ad
*/
@property (nonatomic, copy, readonly, nullable) NSArray<SMANativeImage *> *images;

/**
URL of image creative that should be rendered as small icon control on view with native ad
*/
@property (nonatomic, readonly, nullable) SMANativeImage *icon;

/**
Digital value (integer value in interval 1..5) that should be rendered as stars rating (or other way) control on view with native ad
*/
@property (nonatomic, readonly) CGFloat rating;

/**
Returns true if the native response contains extra ad markup
*/
@property (nonatomic, readonly) BOOL hasAdMarkup;

@end
