// 
// NGSDK SDK License
//
//

#import <Foundation/Foundation.h>
#import "NGSDKAd.h"
#import "NGSDKIntegrationType.h"
#import "NGSDKAdSize.h"

@class NGSDKAdRequest;
@class NGSDKAdRequestModel;

typedef enum {
    NGSDKOpenRTBAdNative,
    NGSDKOpenRTBAdBanner,
    NGSDKOpenRTBAdVideo
 } NGSDKOpenRTBAdType;

@protocol NGSDKAdRequestDelegate <NSObject>

- (void)requestDidStart:(NGSDKAdRequest *)request;
- (void)request:(NGSDKAdRequest *)request didLoadWithAd:(NGSDKAd *)ad;
- (void)request:(NGSDKAdRequest *)request didFailWithError:(NSError *)error;

@end

@interface NGSDKAdRequest : NSObject

@property (nonatomic, strong) NGSDKAdSize *adSize;
@property (nonatomic, assign) BOOL isRewarded;
@property (nonatomic, readonly) NSArray<NSString *> *supportedAPIFrameworks;
@property (nonatomic) NGSDKOpenRTBAdType openRTBAdType;
@property (nonatomic, assign) BOOL isUsingOpenRTB;
@property (nonatomic, assign) BOOL isAutoCacheOnLoad;
@property (nonatomic, readonly) IntegrationType integrationType;
@property (nonatomic) NSObject <NGSDKAdRequestDelegate> *delegate;
@property (nonatomic, assign) NGSDKMarkupPlacement placement;
@property (nonatomic, strong) NSString *adFormat;

- (void)setIntegrationType:(IntegrationType)integrationType withZoneID:(NSString *)zoneID;
- (void)setIntegrationType:(IntegrationType)integrationType withZoneID:(NSString *)zoneID withAppToken:(NSString *)appToken;
- (void)requestAdWithDelegate:(NSObject<NGSDKAdRequestDelegate> *)delegate withZoneID:(NSString *)zoneID;
- (void)requestAdWithDelegate:(NSObject<NGSDKAdRequestDelegate> *)delegate withZoneID:(NSString *)zoneID withAppToken:(NSString *)appToken;
- (void)requestVideoTagFrom:(NSString *)url andWithDelegate:(NSObject<NGSDKAdRequestDelegate> *)delegate;
- (NSURL*)requestURLFromAdRequestModel:(NGSDKAdRequestModel *)adRequestModel;
- (void)processCustomMarkupFrom:(NSString *)markup withPlacement:(NGSDKMarkupPlacement)placement andWithDelegate:(NSObject<NGSDKAdRequestDelegate> *)delegate;
- (void)cacheAd:(NGSDKAd *)ad;
- (void)setMediationVendor:(NSString *)mediationVendor;
- (void)processResponseWithJSON:(NSString *)adReponse;
- (void)processVASTTagResponseFrom:(NSString *)vastAdContent;
- (void)processResponseWithData:(NSData *)data;
- (NSString *)getAdFormat;

@end
