/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface ENRegionServerExposureClassificationCriteria : NSObject <NSSecureCoding, NSCopying> {

	unsigned _perDaySumERVThreshold;
	unsigned _perDayMaxERVThreshold;
	unsigned _weightedDurationAtAttenuationThreshold;
	NSString* _classificationName;
	unsigned long long _index;
	NSDictionary* _perDaySumERVThresholdsByDiagnosisReportType;

}

@property (nonatomic,copy,readonly) NSString * classificationName;                                           //@synthesize classificationName=_classificationName - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                                                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned perDaySumERVThreshold;                                               //@synthesize perDaySumERVThreshold=_perDaySumERVThreshold - In the implementation block
@property (nonatomic,readonly) unsigned perDayMaxERVThreshold;                                               //@synthesize perDayMaxERVThreshold=_perDayMaxERVThreshold - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * perDaySumERVThresholdsByDiagnosisReportType;              //@synthesize perDaySumERVThresholdsByDiagnosisReportType=_perDaySumERVThresholdsByDiagnosisReportType - In the implementation block
@property (nonatomic,readonly) unsigned weightedDurationAtAttenuationThreshold;                              //@synthesize weightedDurationAtAttenuationThreshold=_weightedDurationAtAttenuationThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getCriteria:(id*)arg1 fromDictionary:(id)arg2 index:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)classificationName;
-(unsigned)perDaySumERVThreshold;
-(unsigned)perDayMaxERVThreshold;
-(NSDictionary *)perDaySumERVThresholdsByDiagnosisReportType;
-(unsigned)weightedDurationAtAttenuationThreshold;
@end
