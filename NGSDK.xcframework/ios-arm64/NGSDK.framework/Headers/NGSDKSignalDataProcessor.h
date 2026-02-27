// 
// NGSDK SDK License
//
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
