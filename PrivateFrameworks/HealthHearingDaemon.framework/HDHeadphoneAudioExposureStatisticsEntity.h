/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthHearingDaemon/HealthHearingDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDHeadphoneAudioExposureStatisticsEntity : HDHealthEntity
+(const SCD_Struct_HD1*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)indices;
+(id)insertBucket:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_sortOrderingTerms;
+(BOOL)_enumerateBucketsForProfile:(id)arg1 predicate:(id)arg2 error:(id*)arg3 enumerationHandler:(/*^block*/id)arg4 ;
+(BOOL)insertBuckets:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
+(id)_bucketFromAllPropertiesRow:(HDSQLiteRowRef)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_loadBucketsFromProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_replaceExistingWithBuckets:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
-(id)_bucketWithProfile:(id)arg1 error:(id*)arg2 ;
@end
