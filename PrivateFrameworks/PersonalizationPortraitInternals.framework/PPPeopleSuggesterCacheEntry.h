/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject {

	double _cacheTimeSecondsSince1970;
	NSArray* _identifiers;

}

@property (assign,nonatomic) double cacheTimeSecondsSince1970;              //@synthesize cacheTimeSecondsSince1970=_cacheTimeSecondsSince1970 - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                         //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)identifiers;
-(double)cacheTimeSecondsSince1970;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)setCacheTimeSecondsSince1970:(double)arg1 ;
@end

