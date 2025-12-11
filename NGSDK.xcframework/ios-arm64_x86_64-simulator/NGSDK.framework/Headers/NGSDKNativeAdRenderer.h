// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NGSDKStarRatingView.h"

@interface NGSDKNativeAdRenderer : NSObject

@property (nonatomic, weak) UILabel *titleView;
@property (nonatomic, weak) UILabel *bodyView;
@property (nonatomic, weak) UIView *callToActionView;
@property (nonatomic, weak) UIImageView *iconView;
@property (nonatomic, weak) UIView *bannerView;
@property (nonatomic, weak) UIView *contentInfoView;
@property (nonatomic, weak) NGSDKStarRatingView *starRatingView;

@end
