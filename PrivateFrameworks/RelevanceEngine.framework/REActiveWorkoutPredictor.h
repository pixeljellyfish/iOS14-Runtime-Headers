/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REActiveWorkoutPredictorProperties.h>

@class NSDate, HKQuery, REUpNextTimer;

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties> {

	int _workoutStateNotifyToken;
	float _dailyAverageWorkouts;
	unsigned long long _numberOfWorkoutsPerformedToday;
	HKQuery* _workoutObservationQuery;
	REUpNextTimer* _workoutQueryCoalesceTimer;
	BOOL _hasActiveWorkout;
	NSDate* _lastCompletedWorkoutDate;

}

@property (assign) BOOL hasActiveWorkout;                                                      //@synthesize hasActiveWorkout=_hasActiveWorkout - In the implementation block
@property (retain) NSDate * lastCompletedWorkoutDate;                                          //@synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate - In the implementation block
@property (getter=isActiveWorkout,nonatomic,readonly) BOOL activeWorkout; 
@property (nonatomic,readonly) NSDate * lastWorkoutDate; 
@property (nonatomic,readonly) BOOL currentlyHasActiveWorkout; 
@property (nonatomic,readonly) float dailyAverageWorkouts; 
@property (nonatomic,readonly) unsigned long long numberOfWorkoutsPerformedToday; 
+(id)supportedFeatures;
+(double)updateInterval;
-(void)pause;
-(void)dealloc;
-(BOOL)hasActiveWorkout;
-(void)update;
-(id)_init;
-(void)resume;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)setHasActiveWorkout:(BOOL)arg1 ;
-(void)_cancelMonitoringWorkoutIfNeeded;
-(void)_updateWorkoutState;
-(void)_scheduleFetchWorkoutTimer;
-(NSDate *)lastCompletedWorkoutDate;
-(void)_queue_fetchWorkoutHistory;
-(void)_processWorkoutHistoryData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLastCompletedWorkoutDate:(NSDate *)arg1 ;
-(BOOL)currentlyHasActiveWorkout;
-(float)dailyAverageWorkouts;
-(unsigned long long)numberOfWorkoutsPerformedToday;
-(NSDate *)lastWorkoutDate;
-(BOOL)isActiveWorkout;
@end
