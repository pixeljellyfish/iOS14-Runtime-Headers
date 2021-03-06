/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <PhotosGraph/PGGraphOptimizedEdge.h>

@class NSDate, CLLocation;

@interface PGGraphAddressEdge : PGGraphOptimizedEdge {

	float _weight;
	double _timestampUTCStart;
	double _timestampUTCEnd;
	CLLocationCoordinate2D _photoCoordinate;

}

@property (nonatomic,retain) NSDate * universalStartDate; 
@property (nonatomic,retain) NSDate * universalEndDate; 
@property (assign,nonatomic) CLLocationCoordinate2D photoCoordinate;              //@synthesize photoCoordinate=_photoCoordinate - In the implementation block
@property (nonatomic,retain) CLLocation * photoLocation; 
@property (nonatomic,readonly) double timestampUTCStart;                          //@synthesize timestampUTCStart=_timestampUTCStart - In the implementation block
@property (nonatomic,readonly) double timestampUTCEnd;                            //@synthesize timestampUTCEnd=_timestampUTCEnd - In the implementation block
+(id)filter;
-(NSDate *)universalEndDate;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(double)timestampUTCEnd;
-(NSDate *)universalStartDate;
-(double)timestampUTCStart;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(id)edgeDescription;
-(void)setWeight:(float)arg1 ;
-(void)setPhotoLocation:(CLLocation *)arg1 ;
-(void)setPhotoCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(CLLocationCoordinate2D)photoCoordinate;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(CLLocation *)photoLocation;
-(unsigned short)domain;
-(id)propertyDictionary;
-(id)label;
-(float)weight;
-(id)initWithLabel:(id)arg1 fromMomentNode:(id)arg2 toAddressNode:(id)arg3 weight:(float)arg4 ;
@end

