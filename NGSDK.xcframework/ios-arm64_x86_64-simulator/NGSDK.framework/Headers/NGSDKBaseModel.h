// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

@interface NGSDKBaseModel : NSObject

@property (nonatomic, strong) NSDictionary *dictionary;

+ (NSArray *)parseArrayValues:(NSArray *)array;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
