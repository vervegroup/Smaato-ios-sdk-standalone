// 
// NGSDK SDK License
//
//


@protocol NGSDKCustomCTAViewDelegate <NSObject>
- (void)customCTADidLoadWithSuccess:(BOOL)success;
- (void)customCTADidShow;
- (void)customCTADidClick;
@end

