// 
// HyBid SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "Smaato_HyBidAd.h"

@protocol HyBidSignalDataProcessorDelegate<NSObject>

- (void)signalDataDidFinishWithAd:(HyBidAd *)ad;
- (void)signalDataDidFailWithError:(NSError *)error;

@end
                                                                            
@interface HyBidSignalDataProcessor : NSObject

@property (nonatomic) NSObject <HyBidSignalDataProcessorDelegate> *delegate;

- (void)processSignalData:(NSString *)signalDataString;

@end
