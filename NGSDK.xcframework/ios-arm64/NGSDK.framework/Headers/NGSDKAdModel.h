// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKBaseModel.h"
#import "NGSDKDataModel.h"

@interface NGSDKAdModel : NGSDKBaseModel

@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) NSNumber *assetgroupid;
@property (nonatomic, strong) NSMutableArray<NGSDKDataModel*> *assets;
@property (nonatomic, strong) NSArray<NGSDKDataModel*> *beacons;
@property (nonatomic, strong) NSArray<NGSDKDataModel*> *meta;

- (NGSDKDataModel *)assetWithType:(NSString *)type;
- (NGSDKDataModel *)metaWithType:(NSString *)type;
- (NSArray *)beaconsWithType:(NSString *)type;

@end
