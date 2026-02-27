// 
// NGSDK SDK License
//
//

#import <CoreLocation/CoreLocation.h>

@interface NGSDKLocationManager : NSObject

+ (BOOL) locationUpdatesEnabled;
+ (BOOL) locationTrackingEnabled;
// setLocationUpdates: Allowing SDK to update location , default is false.
+ (void) setLocationUpdatesEnabled:(BOOL)enabled;
// setLocationTracking: Allowing SDK to track user location , default is true.
+ (void) setLocationTrackingEnabled:(BOOL)enabled;
+ (CLLocation *)getLocation;

@end
