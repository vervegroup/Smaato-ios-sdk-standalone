// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>

@interface NGSDKAdSize: NSObject

@property (nonatomic, assign, readonly) NSInteger width;
@property (nonatomic, assign, readonly) NSInteger height;
@property (nonatomic, strong, readonly) NSString *layoutSize;

@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_320x50;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_300x250;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_300x50;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_320x480;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_1024x768;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_768x1024;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_728x90;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_160x600;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_250x250;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_300x600;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_320x100;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_480x320;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_INTERSTITIAL;
@property (class, nonatomic, readonly) NGSDKAdSize *SIZE_NATIVE;

- (BOOL)isEqualTo:(NGSDKAdSize *)hyBidAdSize;

@end

