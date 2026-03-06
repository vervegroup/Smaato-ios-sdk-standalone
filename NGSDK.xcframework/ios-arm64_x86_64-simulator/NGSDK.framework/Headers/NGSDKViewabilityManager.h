// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKOMIDAdSessionWrapper.h"

@interface NGSDKViewabilityManager : NSObject

@property (nonatomic, assign) BOOL viewabilityMeasurementEnabled;
@property (nonatomic, assign, readonly) BOOL isViewabilityMeasurementActivated;

@property (nonatomic, strong) id partner;
@property (nonatomic, strong) NGSDKOMIDAdSessionWrapper *omidAdSession;
@property (nonatomic, strong) NGSDKOMIDAdSessionWrapper *omidMediaAdSession;
@property (nonatomic, strong) id adEvents;
@property (nonatomic, strong) id omidMediaEvents;

+ (instancetype)sharedInstance;
- (NSString *)getOMIDJS;
- (id)getAdEvents:(NGSDKOMIDAdSessionWrapper *)omidAdSessionWrapper;
- (id)getMediaEvents:(NGSDKOMIDAdSessionWrapper *)omidAdSessionWrapper;
- (void)reportEvent:(NSString *)eventType;

@end

