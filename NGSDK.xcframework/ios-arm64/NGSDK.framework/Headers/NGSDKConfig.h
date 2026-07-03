// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKConfigModel.h"

@interface NGSDKConfig : NSObject


- (instancetype)initWithData:(NGSDKConfigModel *)data;

- (NGSDKDataModel *)appLevelDataWithType:(NSString *)type;

@end
