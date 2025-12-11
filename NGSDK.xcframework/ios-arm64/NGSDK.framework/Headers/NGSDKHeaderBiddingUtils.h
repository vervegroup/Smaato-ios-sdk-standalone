// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"

typedef NS_ENUM(NSInteger, NGSDKKeywordMode) {
    TWO_DECIMAL_PLACES,
    THREE_DECIMAL_PLACES
};

@interface NGSDKHeaderBiddingUtils : NSObject

+ (NSString *)createHeaderBiddingKeywordsStringWithAd:(NGSDKAd *)ad;
+ (NSString *)createHeaderBiddingKeywordsStringWithAd:(NGSDKAd *)ad withZoneID:(NSString *)zoneID;
+ (NSString *)createHeaderBiddingKeywordsStringWithAd:(NGSDKAd *)ad withKeywordMode:(NGSDKKeywordMode)keywordMode;

+ (NSMutableDictionary *)createHeaderBiddingKeywordsDictionaryWithAd:(NGSDKAd *)ad;
+ (NSMutableDictionary *)createHeaderBiddingKeywordsDictionaryWithAd:(NGSDKAd *)ad withZoneID:(NSString *)zoneID;
+ (NSMutableDictionary *)createHeaderBiddingKeywordsDictionaryWithAd:(NGSDKAd *)ad withKeywordMode:(NGSDKKeywordMode)keywordMode;
+ (NSString *)eCPMFromAd:(NGSDKAd *)ad withDecimalPlaces:(NGSDKKeywordMode)decimalPlaces;

@end
