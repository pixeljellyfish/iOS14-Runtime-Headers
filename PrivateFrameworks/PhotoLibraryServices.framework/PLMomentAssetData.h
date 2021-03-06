/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSDate, NSData, PLRevGeoPlaceAnnotation, PLRevGeoLocationInfo, NSString;


@protocol PLMomentAssetData <PLMomentRefreshable,PLRegionsClusteringItem>
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain,readonly) NSDate * localDateCreated; 
@property (nonatomic,readonly) int inferredTimeZoneOffset; 
@property (nonatomic,readonly) double gpsHorizontalAccuracy; 
@property (nonatomic,retain) id<PLMomentData> moment; 
@property (nonatomic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic) BOOL reverseLocationDataIsValid; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) CLLocation * shiftedLocation; 
@property (assign,nonatomic) BOOL shiftedLocationIsValid; 
@property (nonatomic,retain,readonly) PLRevGeoPlaceAnnotation * placeAnnotation; 
@property (nonatomic,retain,readonly) PLRevGeoLocationInfo * locationInfo; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingSummaryAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> highlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> dayGroupHighlightBeingExtendedAssets; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingKeyAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> monthHighlightBeingFirstAsset; 
@property (assign,nonatomic) id<PLPhotosHighlightData> yearHighlightBeingKeyAsset; 
@property (assign,nonatomic) BOOL favorite; 
@property (assign,nonatomic) double curationScore; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isScreenRecording; 
@property (nonatomic,readonly) NSString * avalancheUUID; 
@property (nonatomic,readonly) BOOL isInterestingForAvalanche; 
@property (nonatomic,readonly) BOOL isAvalancheStackPhoto; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) short kind; 
@property (assign,nonatomic) short kindSubtype; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain,readonly) NSString * cloudAssetGUID; 
@optional
-(void)setModificationDate:(id)arg1;
-(NSDate *)modificationDate;
-(void)setHeight:(long long)arg1;
-(long long)width;
-(void)setKindSubtype:(short)arg1;
-(short)kind;
-(double)duration;
-(long long)height;
-(void)setDuration:(double)arg1;
-(void)setWidth:(long long)arg1;
-(void)setKind:(short)arg1;
-(NSString *)uuid;
-(short)kindSubtype;
-(NSString *)cloudAssetGUID;

@required
-(void)setCurationScore:(double)arg1;
-(void)setShiftedLocation:(id)arg1;
-(BOOL)reverseLocationDataIsValid;
-(CLLocation *)shiftedLocation;
-(void)setFavorite:(BOOL)arg1;
-(BOOL)favorite;
-(BOOL)isPhoto;
-(void)setReverseLocationData:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingKeyAsset;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingKeyAsset;
-(id<PLMomentData>)moment;
-(CLLocation *)location;
-(NSString *)avalancheUUID;
-(void)setDateCreated:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSObject*<NSCopying>)uniqueObjectID;
-(double)curationScore;
-(void)setReverseLocationDataIsValid:(BOOL)arg1;
-(void)setShiftedLocationIsValid:(BOOL)arg1;
-(double)gpsHorizontalAccuracy;
-(PLRevGeoLocationInfo *)locationInfo;
-(id)assetComparisonSortDescriptors;
-(BOOL)isVideo;
-(int)inferredTimeZoneOffset;
-(id)globalUUID;
-(BOOL)isScreenRecording;
-(long long)compareToAsset:(id)arg1;
-(BOOL)visibilityStateIsEqualToState:(short)arg1;
-(void)setMoment:(id)arg1;
-(BOOL)shiftedLocationIsValid;
-(id<PLPhotosHighlightData>)highlightBeingAssets;
-(void)setHighlightBeingAssets:(id)arg1;
-(void)setHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingSummaryAssets;
-(id<PLPhotosHighlightData>)yearHighlightBeingKeyAsset;
-(void)setHighlightBeingSummaryAssets:(id)arg1;
-(id<PLPhotosHighlightData>)highlightBeingExtendedAssets;
-(void)setHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingAssets;
-(void)setDayGroupHighlightBeingAssets:(id)arg1;
-(void)setDayGroupHighlightBeingKeyAsset:(id)arg1;
-(NSDate *)localDateCreated;
-(NSData *)reverseLocationData;
-(id<PLPhotosHighlightData>)dayGroupHighlightBeingExtendedAssets;
-(void)setDayGroupHighlightBeingExtendedAssets:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingKeyAsset;
-(void)setMonthHighlightBeingKeyAsset:(id)arg1;
-(id<PLPhotosHighlightData>)monthHighlightBeingFirstAsset;
-(void)setMonthHighlightBeingFirstAsset:(id)arg1;
-(void)setYearHighlightBeingKeyAsset:(id)arg1;
-(BOOL)isInterestingForAvalanche;
-(BOOL)isDeleted;
-(NSDate *)dateCreated;
-(BOOL)hasChanges;
-(BOOL)isAvalancheStackPhoto;
-(PLRevGeoPlaceAnnotation *)placeAnnotation;

@end

