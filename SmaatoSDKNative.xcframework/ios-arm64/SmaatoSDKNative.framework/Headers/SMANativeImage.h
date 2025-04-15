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

/**
\SMANativeImage class represents image object of Native ads assets
*/
@interface SMANativeImage: NSObject

/**
URL of image where it might be downloaded from
*/
@property (nonatomic, copy, nonnull, readonly) NSURL *url;

/**
Image width
*/
@property (nonatomic, readonly) NSUInteger width;

/**
Image height
*/
@property (nonatomic, readonly) NSUInteger height;

/**
Downloaded image as binary data if it is available and you specified it through \c SMANativeAdRequest object. Might be \c nil.
*/
@property (nonatomic, nullable, readonly) UIImage *image;

- (instancetype _Nullable)initWithURL:(NSURL *_Nullable)url width:(CGFloat)width height:(CGFloat)height;

@end

