// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

static NSString* NGSDKMRAIDSupportsSMS = @"sms";
static NSString* NGSDKMRAIDSupportsTel = @"tel";
static NSString* NGSDKMRAIDSupportsStorePicture = @"storePicture";
static NSString* NGSDKMRAIDSupportsInlineVideo = @"inlineVideo";
static NSString* NGSDKMRAIDSupportsLocation = @"location";


// A delegate for MRAIDView/MRAIDInterstitial to listen for notifications when the following events
// are triggered from a creative: SMS, Telephone call, Play Video (external) and
// saving pictures. If you don't implement this protocol, the default for
// supporting these features for creative will be FALSE.

@protocol NGSDKMRAIDServiceDelegate <NSObject>

@optional

// These callbacks are to request other services.
- (void)mraidServicePlayVideoWithUrlString:(NSString *)urlString;
- (void)mraidServiceOpenBrowserWithUrlString:(NSString *)urlString;
- (void)mraidServiceStorePictureWithUrlString:(NSString *)urlString;
- (void)mraidServiceSendSMSWithUrlString:(NSString *)urlString;
- (void)mraidServiceCallNumberWithUrlString:(NSString *)urlString;
- (void)mraidServiceTrackingEndcardWithUrlString:(NSString *)urlString;

@end
