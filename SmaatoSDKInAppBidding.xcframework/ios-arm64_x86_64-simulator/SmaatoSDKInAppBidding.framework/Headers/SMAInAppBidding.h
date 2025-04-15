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

@class SMAInAppBid;

/**
Class \c SMAInAppBidding provided methods to support In-App-Bidding solution when Smaato SDK acts
 as service for Smaato ad response rendering that is result of server-to-server exchange.
*/
@interface SMAInAppBidding: NSObject

/**
Save \c SMAInAppBid object into internal cache for future usage by SmaatoSDK public API for ad rendering and management.

@param bid    A bid object that contains ad response body. Must not be \c nil.
@param errorPtr  If any issue is found, the `error` parameter will contain error information and nil will be returned as method result

@return      If bid object is valid and processing completes successfully, the string result parameter
is returned. This string will contain unique identifier like "<ADSPACE_ID>:<SESSION_ID>", that can be used
to render ads based on this given bid.
*/
+ (NSString *_Nullable)saveBid:(SMAInAppBid *_Nonnull)bid error:(NSError *_Nullable *_Nullable)errorPtr;

+ (NSString *_Nullable)getBid:(NSString *_Nullable)uid;

@end
