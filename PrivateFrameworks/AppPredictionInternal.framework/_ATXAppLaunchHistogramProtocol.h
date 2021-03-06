/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ATXAppLaunchHistogramProtocol
@required
-(void)resetHistogram:(id)arg1;
-(BOOL)removeHistoryForBundleId:(id)arg1;
-(double)totalLaunches;
-(BOOL)bundleHasBeenLaunched:(id)arg1;
-(void)decayWithHalfLifeInDays:(double)arg1;
-(void)resetData;
-(void)verifyDataIntegrity;
-(void)decayByFactor:(double)arg1;
-(int)removeHistoryForBundleIds:(id)arg1;

@end

