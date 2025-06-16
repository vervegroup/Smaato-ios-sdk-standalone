// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidConfig.h"

typedef void(^ConfigManagerCompletionBlock)(HyBidConfig* _Nullable config, NSError* _Nullable error);

@interface HyBidConfigManager : NSObject

- (void)requestConfigWithCompletion:(ConfigManagerCompletionBlock _Nonnull )completion;

@end
