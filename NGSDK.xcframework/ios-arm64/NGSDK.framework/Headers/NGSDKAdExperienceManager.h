//
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

@class NGSDKAd;

@interface NGSDKAdExperienceManager : NSObject

+ (BOOL)isBrandExperienceValue:(nullable NSString *)adExperience;
+ (BOOL)isPerformanceExperienceValue:(nullable NSString *)adExperience;

+ (BOOL)hasBrandExperience:(nullable NGSDKAd *)ad;
+ (BOOL)hasPerformanceExperience:(nullable NGSDKAd *)ad;

+ (BOOL)isBrandCompatible:(nullable NGSDKAd *)ad;
+ (BOOL)isPerformanceCompatible:(nullable NGSDKAd *)ad;

+ (BOOL)isBrandAd:(nullable NGSDKAd *)ad;
+ (BOOL)isPerformanceAd:(nullable NGSDKAd *)ad;

@end
