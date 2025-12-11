// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAdPresenter.h"
#import "NGSDKAd.h"

@interface NGSDKAdPresenterFactory : NSObject

- (NGSDKAdPresenter *)createAdPresenterWithAd:(NGSDKAd *)ad
                                 withDelegate:(NSObject<NGSDKAdPresenterDelegate> *)delegate;

- (NGSDKAdPresenter *)adPresenterFromAd:(NGSDKAd *)ad;

@end
