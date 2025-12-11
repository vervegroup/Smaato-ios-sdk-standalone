// 
// NGSDK SDK License
//
// https://github.com/pubnative/pubnative-hybid-ios-sdk/blob/main/LICENSE
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

+ (instancetype)hyBidNoFill;
+ (instancetype)hyBidParseError;
+ (instancetype)hyBidServerError;
+ (instancetype)hyBidServerErrorWithMessage:(NSString *) message;
+ (instancetype)hyBidInvalidAsset;
+ (instancetype)hyBidUnsupportedAsset;
+ (instancetype)hyBidNullAd;
+ (instancetype)hyBidInvalidAd;
+ (instancetype)hyBidInvalidZoneId;
+ (instancetype)hyBidInvalidSignalData;
+ (instancetype)hyBidNotInitialised;
+ (instancetype)hyBidAuctionNoAd;
+ (instancetype)hyBidRenderingBanner;
+ (instancetype)hyBidRenderingInterstitial;
+ (instancetype)hyBidRenderingRewarded;
+ (instancetype)hyBidMraidPlayer;
+ (instancetype)hyBidVastPlayer;
+ (instancetype)hyBidTrackingUrl;
+ (instancetype)hyBidTrackingJS;
+ (instancetype)hyBidInvalidUrl;
+ (instancetype)hyBidInternalError;
+ (instancetype)hyBidUnknownError;
+ (instancetype)hyBidDisabledFormatError;
+ (instancetype)hyBidDisabledRenderingEngineError;
+ (instancetype)hyBidExpiredAd;
+ (instancetype)hyBidVASTParserSchemaValidationError;
+ (instancetype)hyBidVASTParserTooManyWrappersError;
+ (instancetype)hyBidVASTParserNoCompatibleMediaFileError;
+ (instancetype)hyBidVASTParserNoInternetConnectionError;
+ (instancetype)hyBidVASTParserMovieTooShortError;
+ (instancetype)hyBidAdFeedbackFormNotLoaded;
+ (instancetype)hyBidInvalidHTML;
+ (instancetype)hyBidVASTNoAdResponse;
+ (instancetype)hyBidVASTBothAdAndErrorPresentInRootResponse;
+ (instancetype)hyBidInvalidCustomCTAIconUrl;
+ (instancetype)hyBidInvalidRemoteConfigData;

@end
