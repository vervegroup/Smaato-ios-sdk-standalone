// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKInterstitialPresenter.h"
#import "NGSDKAd.h"

@class NGSDKSkipOffset;

@interface NGSDKInterstitialPresenterFactory : NSObject

- (NGSDKInterstitialPresenter *)createInterstitalPresenterWithAd:(NGSDKAd *)ad
                                             withVideoSkipOffset:(NGSDKSkipOffset *)videoSkipOffset
                                              withHTMLSkipOffset:(NSUInteger)htmlSkipOffset
                                               withCloseOnFinish:(BOOL)closeOnFinish
                                                    withDelegate:(NSObject<NGSDKInterstitialPresenterDelegate> *)delegate;

@end
