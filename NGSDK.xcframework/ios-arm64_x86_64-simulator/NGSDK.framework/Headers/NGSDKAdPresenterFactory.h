// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKAdPresenter.h"
#import "NGSDKAd.h"

@interface NGSDKAdPresenterFactory : NSObject

- (NGSDKAdPresenter *)createAdPresenterWithAd:(NGSDKAd *)ad
                                 withDelegate:(NSObject<NGSDKAdPresenterDelegate> *)delegate;

- (NGSDKAdPresenter *)adPresenterFromAd:(NGSDKAd *)ad;

@end
