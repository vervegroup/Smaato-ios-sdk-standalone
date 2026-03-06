// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>

extern NSString * const kNGSDKErrorDomain;

typedef enum {
    NGSDKErrorCodeNoFill = 1,
    NGSDKErrorCodeParse = 2,
    NGSDKErrorCodeServer = 3,
    NGSDKErrorCodeInvalidAsset = 4,
    NGSDKErrorCodeUnsupportedAsset = 5,
    NGSDKErrorCodeNullAd = 6,
    NGSDKErrorCodeInvalidAd = 7,
    NGSDKErrorCodeInvalidZoneId = 8,
    NGSDKErrorCodeInvalidSignalData = 9,
    NGSDKErrorCodeNotInitialised = 10,
    NGSDKErrorCodeAuctionNoAd = 11,
    NGSDKErrorCodeRenderingBanner = 12,
    NGSDKErrorCodeRenderingInterstitial = 13,
    NGSDKErrorCodeRenderingRewarded = 14,
    NGSDKErrorCodeMraidPlayer = 15,
    NGSDKErrorCodeVastPlayer = 16,
    NGSDKErrorCodeTrackingUrl = 17,
    NGSDKErrorCodeTrackingJS = 18,
    NGSDKErrorCodeInvalidUrl = 19,
    NGSDKErrorCodeInternal = 20,
    NGSDKErrorCodeUnknown = 21,
    NGSDKErrorCodeDisabledFormat = 22,
    NGSDKErrorCodeDisabledRenderingEngine = 23,
    NGSDKExpiredAd = 24,
    NGSDKErrorVASTParserSchemaValidation = 25,
    NGSDKErrorVASTParserTooManyWrappers = 26,
    NGSDKErrorVASTParserNoCompatibleMediaFile = 27,
    NGSDKErrorVASTParserNoInternetConnection = 28,
    NGSDKErrorVASTParserMovieTooShort = 29,
    NGSDKErrorCodeAdFeedbackFormNotLoaded = 30,
    NGSDKErrorCodeInvalidHTML = 31,
    NGSDKErrorVASTParserNoAdResponse = 32,
    NGSDKErrorVASTParserBothAdAndErrorPresentInRootResponse = 33,
    NGSDKErrorCodeInvalidCustomCTAIconUrl = 34,
    NGSDKErrorCodeInvalidRemoteConfigData = 35
} NGSDKErrorCode;

@interface NSError (NGSDK)

+ (NSError *)errorWithCode:(NGSDKErrorCode)code localizedDescription:(NSString *)description;

+ (instancetype)ngsdkNoFill;
+ (instancetype)ngsdkParseError;
+ (instancetype)ngsdkServerError;
+ (instancetype)ngsdkServerErrorWithMessage:(NSString *) message;
+ (instancetype)ngsdkInvalidAsset;
+ (instancetype)ngsdkUnsupportedAsset;
+ (instancetype)ngsdkNullAd;
+ (instancetype)ngsdkInvalidAd;
+ (instancetype)ngsdkInvalidZoneId;
+ (instancetype)ngsdkInvalidSignalData;
+ (instancetype)ngsdkNotInitialised;
+ (instancetype)ngsdkAuctionNoAd;
+ (instancetype)ngsdkRenderingBanner;
+ (instancetype)ngsdkRenderingInterstitial;
+ (instancetype)ngsdkRenderingRewarded;
+ (instancetype)ngsdkMraidPlayer;
+ (instancetype)ngsdkVastPlayer;
+ (instancetype)ngsdkTrackingUrl;
+ (instancetype)ngsdkTrackingJS;
+ (instancetype)ngsdkInvalidUrl;
+ (instancetype)ngsdkInternalError;
+ (instancetype)ngsdkUnknownError;
+ (instancetype)ngsdkDisabledFormatError;
+ (instancetype)ngsdkDisabledRenderingEngineError;
+ (instancetype)ngsdkExpiredAd;
+ (instancetype)ngsdkVASTParserSchemaValidationError;
+ (instancetype)ngsdkVASTParserTooManyWrappersError;
+ (instancetype)ngsdkVASTParserNoCompatibleMediaFileError;
+ (instancetype)ngsdkVASTParserNoInternetConnectionError;
+ (instancetype)ngsdkVASTParserMovieTooShortError;
+ (instancetype)ngsdkAdFeedbackFormNotLoaded;
+ (instancetype)ngsdkInvalidHTML;
+ (instancetype)ngsdkVASTNoAdResponse;
+ (instancetype)ngsdkVASTBothAdAndErrorPresentInRootResponse;
+ (instancetype)ngsdkInvalidCustomCTAIconUrl;
+ (instancetype)ngsdkInvalidRemoteConfigData;

@end
