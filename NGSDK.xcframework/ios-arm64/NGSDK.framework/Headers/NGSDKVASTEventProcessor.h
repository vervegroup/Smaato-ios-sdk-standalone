// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKVASTAdTrackingEventType.h"
#import "NGSDKVASTTracking.h"
#import "NGSDKVASTImpression.h"

typedef NS_ENUM(NSInteger, NGSDKVASTUrlType) {
    NGSDKVASTImpressionURL,
    NGSDKVASTClickTrackingURL,
    NGSDKVASTIconClickTrackingURL,
    NGSDKVASTParserErrorURL,
    NGSDKVASTErrorURL,
};

@protocol NGSDKVASTEventProcessorDelegate <NSObject>

- (void)eventProcessorDidTrackEventType:(NGSDKVASTAdTrackingEventType)event;

@end

@interface NGSDKVASTEventProcessor : NSObject

- (id)initWithEventsDictionary:(NSDictionary<NSString *, NSMutableArray<NSString *> *> *)eventDictionary progressEventsDictionary:(NSDictionary<NSString *, NSString *> *)progressEventDictionary delegate:(id<NGSDKVASTEventProcessorDelegate>)delegate;


- (id)initWithEvents:(NSArray<NGSDKVASTTracking *> *)events delegate:(id<NGSDKVASTEventProcessorDelegate>)delegate;

// sends the given VASTEvent
- (void)trackEventWithType:(NGSDKVASTAdTrackingEventType)type;
- (void)trackProgressEvent:(NSString*)offset;
- (void)trackImpression:(NGSDKVASTImpression*)impression;
- (void)trackImpressionWith:(NSString*)impressionURL;

- (void)sendVASTBeaconUrl:(NSString *)url withTrackingType:(NSString *)trackingType beaconName:(NSString *)beaconName;
// sends the set of http requests to supplied URLs, used for Impressions, ClickTracking, and Errors.
- (void)sendVASTUrls:(NSArray *)urls withType:(NGSDKVASTUrlType)type;

- (void)setCustomEvents:(NSArray<NGSDKVASTTracking *> *)events;

@end
