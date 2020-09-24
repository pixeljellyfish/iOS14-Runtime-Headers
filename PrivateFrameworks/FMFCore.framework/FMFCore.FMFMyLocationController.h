/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@interface FMFCore.FMFMyLocationController : NSObject <CLLocationManagerDelegate> {

	 delegate;
	 unshiftedLocation;
	 currentMyLocation;
	 myLocation;
	 myUnshiftedLocation;
	 locationShifter;
	 accuracyThreshold;
	 distanceThreshold;
	 locationManager;
	 myLocationUpdatingQueue;
	 interactionController;

}
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
@end
