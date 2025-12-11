// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKBaseModel.h"
#import "NGSDKDataModel.h"

@interface NGSDKConfigModel : NGSDKBaseModel

@property (nonatomic, strong) NSMutableArray<NGSDKDataModel*> *appLevel;

- (NGSDKDataModel *)appLevelWithType:(NSString *)type;

@end

