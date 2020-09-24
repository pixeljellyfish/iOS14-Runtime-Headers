/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKMapViewSuspendedEffectsToken.h>

@protocol _MKMapViewSuspendedEffectsToken <NSObject>
@required
-(void)invalidate;

@end


@class MKMapView, NSString;

@interface _MKMapViewSuspendedEffectsToken : NSObject <_MKMapViewSuspendedEffectsToken> {

	BOOL _invalidated;
	MKMapView* _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(id)initWithOwner:(id)arg1 ;
@end
