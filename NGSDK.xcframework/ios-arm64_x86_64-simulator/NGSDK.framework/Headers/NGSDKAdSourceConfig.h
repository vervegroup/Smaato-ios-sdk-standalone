//// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import "NGSDKBaseModel.h"

@interface NGSDKAdSourceConfig : NGSDKBaseModel

@property (nonatomic, assign) double eCPM;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSString* vastTagUrl;
@property (nonatomic, strong) NSString* type;

@end
