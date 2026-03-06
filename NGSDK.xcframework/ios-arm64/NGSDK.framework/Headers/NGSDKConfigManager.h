// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKConfig.h"

typedef void(^ConfigManagerCompletionBlock)(NGSDKConfig* _Nullable config, NSError* _Nullable error);

@interface NGSDKConfigManager : NSObject

- (void)requestConfigWithCompletion:(ConfigManagerCompletionBlock _Nonnull )completion;

@end
