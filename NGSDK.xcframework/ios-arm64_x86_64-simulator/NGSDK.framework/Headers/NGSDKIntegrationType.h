// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>

typedef enum {
    HEADER_BIDDING,
    IN_APP_BIDDING,
    MEDIATION,
    STANDALONE,
} IntegrationType;

@interface NGSDKIntegrationType : NSObject

+ (NSString *)integrationTypeToString:(IntegrationType)integrationType;

@end
