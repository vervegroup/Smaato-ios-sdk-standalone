// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKConfigModel.h"

@interface NGSDKConfig : NSObject

@property (nonatomic, readonly) BOOL atomEnabled;

- (instancetype)initWithData:(NGSDKConfigModel *)data;

- (NGSDKDataModel *)appLevelDataWithType:(NSString *)type;

@end
