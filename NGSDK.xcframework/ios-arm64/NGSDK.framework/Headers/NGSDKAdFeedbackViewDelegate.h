// 
// NGSDK SDK License
//
//

@protocol NGSDKAdFeedbackViewDelegate<NSObject>
@optional
- (void)adFeedbackViewIsReady;
- (void)adFeedbackViewDidLoad;
- (void)adFeedbackViewDidFailWithError:( NSError * _Nonnull )error;
- (void)adFeedbackViewDidDismiss;

@end
