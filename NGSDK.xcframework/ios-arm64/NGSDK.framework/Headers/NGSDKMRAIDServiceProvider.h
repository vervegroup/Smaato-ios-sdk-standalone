// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

@interface NGSDKMRAIDServiceProvider : NSObject

- (void)openBrowser:(NSString *)urlString;
- (void)playVideo:(NSString *)urlString;
- (void)storePicture:(NSString *)urlString;
- (void)sendSMS:(NSString *)urlString;
- (void)callNumber:(NSString *)urlString;

@end
