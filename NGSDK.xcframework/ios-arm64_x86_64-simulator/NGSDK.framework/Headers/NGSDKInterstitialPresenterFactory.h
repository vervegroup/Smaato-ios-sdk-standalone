// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
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
