/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MNXPCActivity : NSObject {

	/*^block*/id _codeBlock;
	BOOL _repeat;
	BOOL _shouldWakeDevice;
	BOOL _useCoreDuetPowerBudgeting;
	BOOL _runOnBattery;
	NSString* _identifier;
	double _tolerance;
	unsigned long long _qualityOfService;
	unsigned long long _networkRequirements;
	NSDate* _scheduledDate;

}

@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL repeat;                                         //@synthesize repeat=_repeat - In the implementation block
@property (nonatomic,readonly) BOOL shouldWakeDevice;                               //@synthesize shouldWakeDevice=_shouldWakeDevice - In the implementation block
@property (nonatomic,readonly) BOOL useCoreDuetPowerBudgeting;                      //@synthesize useCoreDuetPowerBudgeting=_useCoreDuetPowerBudgeting - In the implementation block
@property (nonatomic,readonly) BOOL runOnBattery;                                   //@synthesize runOnBattery=_runOnBattery - In the implementation block
@property (nonatomic,readonly) double tolerance;                                    //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,readonly) unsigned long long qualityOfService;                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequirements;              //@synthesize networkRequirements=_networkRequirements - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledDate;                              //@synthesize scheduledDate=_scheduledDate - In the implementation block
+(void)checkInActivity:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(NSString *)identifier;
-(void)invalidate;
-(unsigned long long)qualityOfService;
-(id)debugDescription;
-(BOOL)repeat;
-(id)init;
-(double)remainingTime;
-(double)tolerance;
-(NSDate *)scheduledDate;
-(id)description;
-(void)scheduleForDate:(id)arg1 codeBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 repeat:(BOOL)arg2 shouldWakeDevice:(BOOL)arg3 useCoreDuetPowerBudgeting:(BOOL)arg4 runOnBattery:(BOOL)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8 ;
-(BOOL)_needsNetworkRequirement:(unsigned long long)arg1 ;
-(BOOL)shouldWakeDevice;
-(BOOL)useCoreDuetPowerBudgeting;
-(BOOL)runOnBattery;
-(unsigned long long)networkRequirements;
@end

