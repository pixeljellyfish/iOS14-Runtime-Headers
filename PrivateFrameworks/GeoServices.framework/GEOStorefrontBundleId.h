/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface GEOStorefrontBundleId : NSObject {

	unsigned long long _identifier;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
-(unsigned long long)identifier;
-(NSDate *)date;
-(id)init;
-(id)initWithBundleId:(id)arg1 ;
@end
