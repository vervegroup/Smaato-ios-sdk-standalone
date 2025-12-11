// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"

@protocol NGSDKSignalDataProcessorDelegate<NSObject>

- (void)signalDataDidFinishWithAd:(NGSDKAd *)ad;
- (void)signalDataDidFailWithError:(NSError *)error;

@end
                                                                            
@interface NGSDKSignalDataProcessor : NSObject

@property (nonatomic) NSObject <NGSDKSignalDataProcessorDelegate> *delegate;

- (void)processSignalData:(NSString *)signalDataString;

@end
