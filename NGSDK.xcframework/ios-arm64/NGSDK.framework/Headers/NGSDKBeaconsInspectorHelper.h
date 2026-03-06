//
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

@interface NGSDKBeaconsInspectorHelper : NSObject

+ (void)adBeaconDictionariesFromLastResponseWithCompletion:(void (^_Nullable)(NSArray<NSDictionary<NSString *, id> *> * _Nullable))completion;

+ (void)adBeaconDictionariesFromResponse:(nullable NSString *)response completion:(void (^_Nullable)(NSArray<NSDictionary<NSString *, id> *> *_Nullable))completion;

@end
