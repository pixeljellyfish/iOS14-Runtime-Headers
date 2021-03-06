/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSleepHealthStoreInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@class HKTaskServerProxyProvider, HKHealthStore, NSString;

@interface HKSleepHealthStore : NSObject <HKSleepHealthStoreInterface, _HKXPCExportable> {

	HKTaskServerProxyProvider* _proxyProvider;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(HKHealthStore *)healthStore;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(void)stopSleepTrackingSession;
-(void)updateCurrentSleepSchedules:(id)arg1 sleepDurationGoal:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSleepTrackingSession;
-(void)saveSleepTrackingSamples:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

