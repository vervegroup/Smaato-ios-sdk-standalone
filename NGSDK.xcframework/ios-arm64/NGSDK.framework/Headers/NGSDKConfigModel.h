// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKBaseModel.h"
#import "NGSDKDataModel.h"

@interface NGSDKConfigModel : NGSDKBaseModel

@property (nonatomic, strong) NSMutableArray<NGSDKDataModel*> *appLevel;

- (NGSDKDataModel *)appLevelWithType:(NSString *)type;

@end

