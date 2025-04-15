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
@protocol SMANativeView <NSObject>

@optional
/**
Optional UILabel control for sponsored label rendering. Apple HIG requires to mark the view that contains
ad content. Might be \c nil if you care about ad marking yourself.
*/
@property (nonatomic) UILabel *smaSponsoredLabel;

/**
Optional UILabel control for native ad main text (description) rendering. Might be \c nil.
*/
@property (nonatomic) UILabel *smaMainTextLabel;

/**
Optional UILabel control for title text rendering. Might be \c nil.
*/
@property (nonatomic) UILabel *smaTitleLabel;

/**
Optional UIView placeholder for native ad icon creative rendering. Might be \c nil.
*/
@property (nonatomic) UIView *smaIconView;

/**
Optional UIView placeholder for native ad main image creative or video content rendering only. This \c smaMediaView acts as view container
(superview) for specified view with media content. Might be \c nil.
*/
@property (nonatomic) UIView *smaMediaView;

/**
Optional UILabel control for CTA (Click-To-Action) text rendering. Might be \c nil.
*/
@property (nonatomic) UILabel *smaCTALabel;

/**
Optional UIView placeholder for native ad rating rendering. This \c smaRatingView acts as view container (superview) for specified view with
rendered rating. Might be \c nil.
*/
@property (nonatomic) UIView *smaRatingView;

/**
Optional UIView placeholder for Ad Network privacy icon rendering. Tap on \c smaPrivacyView follows to web page that contains Privacy Poicy
of given Ad Network, which provided this ad. Expected size of view is 16*16 pixels, Might be \c nil.
*/
@property (nonatomic) UIView *smaPrivacyView;

@end

