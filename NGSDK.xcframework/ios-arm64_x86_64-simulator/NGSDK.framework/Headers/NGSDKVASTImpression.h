// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKXMLElementEx.h"

@interface NGSDKVASTImpression : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithImpressionXMLElement:(NGSDKXMLElementEx *)impressionXMLElement;

/**
 An ad server id for the impression
 */
- (NSString *)id;

/**
 Impression URI.
 */
- (NSString *)url;

@end
