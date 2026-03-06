// 
// NGSDK SDK License
//
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
