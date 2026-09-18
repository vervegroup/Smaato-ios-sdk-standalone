// 
// NGSDK SDK License
//
//

typedef NS_ENUM(NSInteger){
    NGSDKTimerState_Start,
    NGSDKTimerState_Pause,
    NGSDKTimerState_Stop
} NGSDKTimerState;

typedef enum {
    NGSDKCountdownSimple = 0,
    NGSDKCountdownPieChart __attribute__((deprecated("Use NGSDKCountdownSimple instead"))) = NGSDKCountdownSimple,
    NGSDKCountdownSkipOverlayTimer = 1,
    NGSDKCountdownSkipOverlayProgress = 2
} NGSDKCountdownStyle;
