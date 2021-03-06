/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUPreferencesObserver, OS_dispatch_workloop;
#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSObject, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SUPreferences : NSObject {

	id<SUPreferencesObserver> _observer;
	NSObject*<OS_dispatch_workloop> _preferencesWorkloop;
	NSDictionary* _preferencesDefinitions;
	NSMutableDictionary* _cachedPreferences;
	BOOL _disableAutoSU;
	BOOL _backgroundDLKnownBuilds;

}

@property (nonatomic,retain) NSDictionary * preferencesDefinitions;                                        //@synthesize preferencesDefinitions=_preferencesDefinitions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreferences;                                      //@synthesize cachedPreferences=_cachedPreferences - In the implementation block
@property (assign,nonatomic) id<SUPreferencesObserver> observer;                                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) BOOL disableManagedRequest; 
@property (nonatomic,readonly) BOOL disableUserWiFiOnlyPeriod; 
@property (nonatomic,readonly) BOOL disableBuildNumberComparison; 
@property (nonatomic,readonly) BOOL allowSameBuildUpdates; 
@property (nonatomic,readonly) BOOL disableAvailabilityAlerts; 
@property (getter=isAutoDownloadDisabled,nonatomic,readonly) BOOL disableAutoDownload; 
@property (getter=isAutoSUDisabled,nonatomic,readonly) BOOL disableAutoSU;                                 //@synthesize disableAutoSU=_disableAutoSU - In the implementation block
@property (nonatomic,readonly) BOOL scanWeeklyInternally; 
@property (nonatomic,readonly) BOOL forceFullReplacement; 
@property (nonatomic,readonly) BOOL disableFullReplacementFallback; 
@property (nonatomic,readonly) NSNumber * updateDelayInterval; 
@property (nonatomic,readonly) BOOL shouldDelayUpdates; 
@property (nonatomic,readonly) BOOL shouldDelayInMinutes; 
@property (nonatomic,readonly) NSNumber * unmetConstraints; 
@property (nonatomic,readonly) NSNumber * mandatorySUFlags; 
@property (nonatomic,readonly) NSString * requestedPMV; 
@property (nonatomic,readonly) BOOL backgroundDLKnownBuilds;                                               //@synthesize backgroundDLKnownBuilds=_backgroundDLKnownBuilds - In the implementation block
@property (nonatomic,readonly) NSNumber * autoSUStartDelta; 
@property (nonatomic,readonly) NSNumber * autoSUEndDelta; 
@property (nonatomic,readonly) NSNumber * autoSUUnlockStartDelta; 
@property (nonatomic,readonly) NSNumber * autoSUUnlockEndDelta; 
@property (nonatomic,readonly) BOOL autoUpdateForceOn; 
@property (nonatomic,readonly) BOOL autoUpdateForceOff; 
@property (assign,setter=enableAutomaticUpdateV2:,nonatomic) BOOL isAutomaticUpdateV2Enabled; 
@property (nonatomic,readonly) NSNumber * bannerDelay; 
@property (nonatomic,readonly) BOOL autoDownloadDeletedBuild; 
@property (assign,setter=enableAutomaticDownload:,nonatomic) BOOL isAutomaticDownloadEnabled; 
@property (nonatomic,readonly) BOOL useSUCore; 
+(id)sharedInstance;
-(void)reload;
-(void)dealloc;
-(id)init;
-(BOOL)isAutomaticUpdateV2Enabled;
-(BOOL)isAutomaticDownloadEnabled;
-(void)enableAutomaticDownload:(BOOL)arg1 ;
-(void)enableAutomaticUpdateV2:(BOOL)arg1 ;
-(void)setObserver:(id<SUPreferencesObserver>)arg1 ;
-(id<SUPreferencesObserver>)observer;
-(NSString *)requestedPMV;
-(BOOL)disableBuildNumberComparison;
-(BOOL)allowSameBuildUpdates;
-(BOOL)forceFullReplacement;
-(BOOL)disableFullReplacementFallback;
-(BOOL)disableAvailabilityAlerts;
-(BOOL)disableManagedRequest;
-(void)_loadPreferences;
-(void)_setupAutomaticUpdateV2Enabled;
-(BOOL)_cachedBoolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(BOOL)_autoDownloadDisableDefaultValue;
-(id)_cachedNumberValueForKey:(id)arg1 ;
-(id)_mandatorySUFlagsForPreferences;
-(id)_cachedStringValueForKey:(id)arg1 ;
-(BOOL)_autoInstallDefaultValue;
-(void)_setBooleanPreferenceForKey:(id)arg1 value:(BOOL)arg2 ;
-(void)_setObjectPreferenceForKey:(id)arg1 value:(id)arg2 ;
-(BOOL)isKeySetInPreferences:(id)arg1 ;
-(id)_getValueOfKey:(id)arg1 withType:(long long)arg2 ;
-(BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(id)_copyNumberPreferenceForKey:(id)arg1 ;
-(id)_copyStringPreferenceForKey:(id)arg1 ;
-(void*)_copyPreferenceForKey:(CFStringRef)arg1 ofType:(unsigned long long)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(BOOL)disableAutoDownload;
-(void)_setCachedBooleanPreferenceForKey:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)disableUserWiFiOnlyPeriod;
-(BOOL)scanWeeklyInternally;
-(BOOL)shouldDelayUpdates;
-(NSNumber *)updateDelayInterval;
-(BOOL)shouldDelayInMinutes;
-(NSNumber *)unmetConstraints;
-(NSNumber *)mandatorySUFlags;
-(NSNumber *)autoSUStartDelta;
-(NSNumber *)autoSUEndDelta;
-(NSNumber *)autoSUUnlockStartDelta;
-(NSNumber *)autoSUUnlockEndDelta;
-(BOOL)autoUpdateForceOn;
-(BOOL)autoUpdateForceOff;
-(NSNumber *)bannerDelay;
-(BOOL)autoDownloadDeletedBuild;
-(BOOL)useSUCore;
-(void)setPreference:(id)arg1 toBool:(BOOL)arg2 ;
-(void)setPreference:(id)arg1 toValue:(id)arg2 ;
-(BOOL)isAutoDownloadDisabled;
-(NSDictionary *)preferencesDefinitions;
-(void)setPreferencesDefinitions:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)cachedPreferences;
-(void)setCachedPreferences:(NSMutableDictionary *)arg1 ;
-(BOOL)isAutoSUDisabled;
-(BOOL)backgroundDLKnownBuilds;
@end

