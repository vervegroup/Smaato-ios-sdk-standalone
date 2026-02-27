// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

@interface NGSDKWebBrowserUserAgentInfo : NSObject

/// Returns shared instance that holds user agent;
@property (class, atomic, strong) NGSDKWebBrowserUserAgentInfo *sharedInstance;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 The current user agent as determined by @c WKWebView.
 @returns The user agent.
 */
@property (atomic, copy, readonly) NSString *userAgent;

/**
 The current user agent as determined by @c WKWebView.
 @returns The user agent.
*/
+ (NSString *)ngsdkUserAgent;

@end
