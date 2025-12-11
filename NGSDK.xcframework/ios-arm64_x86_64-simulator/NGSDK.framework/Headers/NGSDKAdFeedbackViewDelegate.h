// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

@protocol NGSDKAdFeedbackViewDelegate<NSObject>
@optional
- (void)adFeedbackViewIsReady;
- (void)adFeedbackViewDidLoad;
- (void)adFeedbackViewDidFailWithError:( NSError * _Nonnull )error;
- (void)adFeedbackViewDidDismiss;

@end
