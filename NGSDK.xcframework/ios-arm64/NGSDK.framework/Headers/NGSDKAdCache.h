// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"

@interface NGSDKAdCache : NSObject

@property(nonatomic, strong) NSMutableDictionary *adCache;

+ (instancetype)sharedInstance;
- (void)putAdToCache:(NGSDKAd *)ad withZoneID:(NSString *)zoneID;
- (NGSDKAd *)retrieveAdFromCacheWithZoneID:(NSString *)zoneID;

@end
