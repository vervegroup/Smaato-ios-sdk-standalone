// 
// NGSDK SDK License
//
//

#import <UIKit/UIKit.h>
#import "NGSDKVASTIconViewTracking.h"
#import "NGSDKVASTIconClickTracking.h"

@class NGSDKContentInfoView;

typedef enum {
    NGSDKContentInfoClickActionExpand,
    NGSDKContentInfoClickActionOpen
} NGSDKContentInfoClickAction;

typedef enum {
    NGSDKContentInfoDisplayInApp,
    NGSDKContentInfoDisplaySystem
} NGSDKContentInfoDisplay;

typedef enum {
    NGSDKContentInfoHorizontalPositionLeft,
    NGSDKContentInfoHorizontalPositionRight
} NGSDKContentInfoHorizontalPosition;

typedef enum {
    NGSDKContentInfoVerticalPositionTop,
    NGSDKContentInfoVerticalPositionBottom
} NGSDKContentInfoVerticalPosition;

@protocol NGSDKContentInfoViewDelegate<NSObject>

- (void)contentInfoViewWidthNeedsUpdate:(NSNumber *)width;

@end

@interface NGSDKContentInfoView : UIView

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *zoneID;
@property (nonatomic) BOOL isCustom;
@property (nonatomic, strong) NSArray<NGSDKVASTIconViewTracking *> *viewTrackers;
@property (nonatomic, strong) NSArray<NGSDKVASTIconClickTracking *> *clickTrackers;
@property (nonatomic, weak) NSObject <NGSDKContentInfoViewDelegate> *delegate;
@property (nonatomic) NGSDKContentInfoClickAction clickAction;
@property (nonatomic) NGSDKContentInfoDisplay display;
@property (nonatomic) NGSDKContentInfoHorizontalPosition horizontalPosition;
@property (nonatomic) NGSDKContentInfoVerticalPosition verticalPosition;

- (void)setIconSize:(CGSize) size;
- (void)setElementsOrientation:(NGSDKContentInfoHorizontalPosition) orientation;
- (CGSize)getValidIconSizeWith:(CGSize)size;

@end
