/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSeriesQuantityDataAggregator.h>

@interface HDAudioExposureAggregator : HDSeriesQuantityDataAggregator
-(BOOL)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5 ;
-(void)addDatum:(id)arg1 toAccumulatedData:(id)arg2 ;
@end
