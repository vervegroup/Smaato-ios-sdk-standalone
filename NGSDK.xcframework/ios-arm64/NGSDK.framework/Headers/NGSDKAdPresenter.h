// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"
#import "NGSDKAdSize.h"

@class NGSDKAdPresenter;
@class NGSDKAdSessionData;

@protocol NGSDKAdPresenterDelegate<NSObject>

- (void)adPresenter:(NGSDKAdPresenter *)adPresenter
      didLoadWithAd:(UIView *)adView;
- (void)adPresenterDidClick:(NGSDKAdPresenter *)adPresenter;
- (void)adPresenter:(NGSDKAdPresenter *)adPresenter
       didFailWithError:(NSError *)error;

@optional
- (void)adPresenterDidStartPlaying:(NGSDKAdPresenter *)adPresenter;
- (void)adPresenterDidAppear:(NGSDKAdPresenter *)adPresenter;
- (void)adPresenterDidDisappear:(NGSDKAdPresenter *)adPresenter;
- (void)adPresenterDidPresentCustomEndCard:(NGSDKAdPresenter *)adPresenter;
- (void)adPresenterDidReplay;

@end

@interface NGSDKAdPresenter : NSObject

@property (nonatomic, readonly) NGSDKAd *ad;
@property (nonatomic, weak) NSObject <NGSDKAdPresenterDelegate> *delegate;
@property (nonatomic, strong) NGSDKAdSessionData *adSessionData;

- (void)load;
- (void)loadMarkupWithSize:(NGSDKAdSize *)adSize;
- (void)startTracking;
- (void)stopTracking;

@end
