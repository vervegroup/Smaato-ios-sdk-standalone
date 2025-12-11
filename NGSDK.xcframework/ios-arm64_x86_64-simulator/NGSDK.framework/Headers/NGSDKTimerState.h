// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
//

typedef NS_ENUM(NSInteger){
    NGSDKTimerState_Start,
    NGSDKTimerState_Pause,
    NGSDKTimerState_Stop
} NGSDKTimerState;

typedef enum {
    NGSDKCountdownPieChart = 0,
    NGSDKCountdownSkipOverlayTimer = 1,
    NGSDKCountdownSkipOverlayProgress = 2
} NGSDKCountdownStyle;
