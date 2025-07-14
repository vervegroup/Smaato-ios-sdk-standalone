// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidAdPresenter.h"
#import "Smaato_HyBidAd.h"

@interface HyBidAdPresenterFactory : NSObject

- (HyBidAdPresenter *)createAdPresenterWithAd:(HyBidAd *)ad
                                 withDelegate:(NSObject<HyBidAdPresenterDelegate> *)delegate;

- (HyBidAdPresenter *)adPresenterFromAd:(HyBidAd *)ad;

@end
