/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	long long _representation;
	NSString* _title;
	VKCustomFeature* _customFeature;
	CGSize _coordinate;

}

@property (nonatomic,readonly) long long representation;              //@synthesize representation=_representation - In the implementation block
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (assign,nonatomic) CGSize coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(BOOL)showsBalloonCallout;
-(long long)representation;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)feature;
-(NSString *)description;
@end
