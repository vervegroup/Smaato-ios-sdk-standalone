// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>

typedef enum {
    NGSDKDiagnosticsEventInitialisation,
    NGSDKDiagnosticsEventAdRequest,
    NGSDKDiagnosticsEventUnknown
} NGSDKDiagnosticsEvent;

@interface NGSDKDiagnosticsManager : NSObject

+ (void)printDiagnosticsLog;
+ (void)printDiagnosticsLogWithEvent:(NGSDKDiagnosticsEvent)event;

@end
