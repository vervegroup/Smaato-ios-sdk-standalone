// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>

@interface NGSDKBaseModel : NSObject

@property (nonatomic, strong) NSDictionary *dictionary;

+ (NSArray *)parseArrayValues:(NSArray *)array;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
