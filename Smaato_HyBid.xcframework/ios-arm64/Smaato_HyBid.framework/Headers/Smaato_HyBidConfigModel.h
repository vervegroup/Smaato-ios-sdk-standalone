// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidBaseModel.h"
#import "Smaato_HyBidDataModel.h"

@interface HyBidConfigModel : HyBidBaseModel

@property (nonatomic, strong) NSMutableArray<HyBidDataModel*> *appLevel;

- (HyBidDataModel *)appLevelWithType:(NSString *)type;

@end

