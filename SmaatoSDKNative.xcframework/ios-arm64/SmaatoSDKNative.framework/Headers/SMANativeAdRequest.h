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

@interface SMANativeAdRequest : NSObject

/**
 Ad space identifier assigned by Smaato
 */
@property (nonatomic, copy, nonnull, readonly) NSString *adSpaceId;

/**
A set of strings defining the required assets for the native ad object.
*/
@property (nonatomic, nullable) NSSet *requiredAssets;

/**
If the value is not set, SDK will download the privacy URL, Defaults to YES
*/
@property (nonatomic) BOOL shouldFetchPrivacy;

/**
 Set this property to YES if you want to get only URLs on image creatives and download them yourself. Set this property to NO if you want to
 get downloaded image creatives. Defaults to YES.
 */
@property (nonatomic) BOOL returnUrlsForImageAssets;

/**
 Set this property to YES if you allow multiple main images for Native ad. Defaults to NO.
 */
@property (nonatomic) BOOL allowMultipleImages;


- (instancetype _Nonnull)init NS_UNAVAILABLE;

- (instancetype _Nonnull)new NS_UNAVAILABLE;

/**
 Create Native ad request

 @param adspaceId  Ad space identifier assigned by Smaato
 @return           Native ad request
 */
- (instancetype _Nullable)initWithAdSpaceId:(NSString *_Nonnull)adspaceId NS_DESIGNATED_INITIALIZER;

@end
