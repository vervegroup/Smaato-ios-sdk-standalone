// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>
#import "NGSDKAd.h"
#import "NGSDKTimerState.h"
#import "NGSDKSKOverlayTimerType.h"
#import "NGSDKSKOverlayDelegate.h"

@interface NGSDKSKOverlay : NSObject

- (instancetype)initWithAd:(NGSDKAd *)ad
                isRewarded:(BOOL)isRewarded
                  delegate:(NSObject <NGSDKSKOverlayDelegate> *)delegate;
- (void)presentWithAd:(NGSDKAd *)ad;
- (void)dismissEntirely:(BOOL)completed withAd:(NGSDKAd *)ad causedByAutoCloseTimerCompletion:(BOOL)autoCloseTimerCompleted;
- (void)updateTimerStateWithRemainingSeconds:(NSInteger)seconds
                              withTimerState:(NGSDKTimerState)timerState
                                forTimerType:(NGSDKSKOverlayTimerType)timerType;
- (void)addObservers;
- (void)changeDelegateFor:(NSObject <NGSDKSKOverlayDelegate> *)delegate;
+ (BOOL)isValidToCreateSKOverlayWithModel:(NGSDKSkAdNetworkModel *)skAdNetworkModel;

@end
