// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKRewardedPresenter.h"
#import "NGSDKAd.h"

@interface NGSDKRewardedPresenterFactory : NSObject

- (NGSDKRewardedPresenter *)createRewardedPresenterWithAd:(NGSDKAd *)ad
                                       withHTMLSkipOffset:(NSUInteger)htmlSkipOffset
                                        withCloseOnFinish:(BOOL)closeOnFinish
                                             withDelegate:(NSObject<NGSDKRewardedPresenterDelegate> *)delegate;

@end
