// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKConfigModel.h"

@interface NGSDKConfig : NSObject

@property (nonatomic, readonly) BOOL atomEnabled;

- (instancetype)initWithData:(NGSDKConfigModel *)data;

- (NGSDKDataModel *)appLevelDataWithType:(NSString *)type;

@end
