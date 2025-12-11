// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKVASTTrackingEvents.h"
#import "NGSDKSKOverlayDelegate.h"

typedef enum {
    NGSDKEndCardType_STATIC,
    NGSDKEndCardType_HTML,
    NGSDKEndCardType_IFRAME,
} NGSDKEndCardType;

@interface NGSDKEndCard : NSObject

@property (nonatomic) NGSDKEndCardType type;

@property (nonatomic, strong) NSString *content;

@property (nonatomic, strong) NSString *clickThrough;

@property (nonatomic, strong) NSArray<NSString *> *clickTrackings;

@property (nonatomic, strong) NGSDKVASTTrackingEvents *events;

@property (nonatomic, assign) BOOL isCustomEndCard;

@property (nonatomic, assign) BOOL isCustomEndCardClicked;
@end
