/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject {

	double _averageSafariVisitsPerDay;
	NSDictionary* _paths;

}

@property (assign,nonatomic) double averageSafariVisitsPerDay;              //@synthesize averageSafariVisitsPerDay=_averageSafariVisitsPerDay - In the implementation block
@property (nonatomic,retain) NSDictionary * paths;                          //@synthesize paths=_paths - In the implementation block
-(NSDictionary *)paths;
-(double)averageSafariVisitsPerDay;
-(id)initWithPBURLMappingDomain:(id)arg1 ;
-(id)tagsForPath:(id)arg1 ;
-(void)setAverageSafariVisitsPerDay:(double)arg1 ;
-(void)setPaths:(NSDictionary *)arg1 ;
@end
