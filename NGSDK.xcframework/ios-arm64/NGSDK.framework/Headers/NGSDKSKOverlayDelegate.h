// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

typedef enum : NSUInteger {
    NGSDKSKOverlayAutomaticCLickVideo = 1 << 0,
    NGSDKSKOverlayAutomaticCLickDefaultEndCard = 1 << 1,
    NGSDKSKOverlayAutomaticCLickCustomEndCard = 1 << 2
} NGSDKSKOverlayAutomaticCLickType;

@protocol NGSDKSKOverlayDelegate <NSObject>
@optional
- (void)skOverlayDidShowOnCreative:(BOOL)isFirstPresentation;
@end
