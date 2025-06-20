// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidRewardedPresenter.h"
#import "Smaato_HyBidAd.h"

@interface HyBidRewardedPresenterFactory : NSObject

- (HyBidRewardedPresenter *)createRewardedPresenterWithAd:(HyBidAd *)ad
                                       withHTMLSkipOffset:(NSUInteger)htmlSkipOffset
                                        withCloseOnFinish:(BOOL)closeOnFinish
                                             withDelegate:(NSObject<HyBidRewardedPresenterDelegate> *)delegate;

@end
