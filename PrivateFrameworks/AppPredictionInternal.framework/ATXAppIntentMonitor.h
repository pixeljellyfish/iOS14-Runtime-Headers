/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXPredictionContextBuilderProtocol, OS_dispatch_queue, _CDLocalContext;
@class _ATXAppLaunchHistogramManager, _ATXDuetHelper, _ATXAppInfoManager, _ATXAppLaunchSequenceManager, _ATXDataStore, NSObject, NSMutableSet, PETScalarEventTracker, PETDistributionEventTracker, ATXInternalAppRegistrationNotification, NSUserDefaults, _PASSimpleCoalescingTimer;

@interface ATXAppIntentMonitor : NSObject {

	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	_ATXDuetHelper* _duetHelper;
	_ATXAppInfoManager* _appInfoManager;
	_ATXAppLaunchSequenceManager* _appActionLaunchSequenceManager;
	_ATXDataStore* _dataStore;
	id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
	NSObject*<OS_dispatch_queue> _appIntentHistoryQueue;
	id<_CDLocalContext> _context;
	NSMutableSet* _registrations;
	NSObject*<OS_dispatch_queue> _donationQueue;
	unsigned long long deletionHandlerToken;
	PETScalarEventTracker* _donatedActionsTracker;
	PETDistributionEventTracker* _donatedActionInCacheTracker;
	ATXInternalAppRegistrationNotification* _appRegistrationListener;
	NSUserDefaults* _userDefaults;
	_PASSimpleCoalescingTimer* _coalescedIntentOrActivityDeletion;

}
-(void)_respondToIntentStreamChangingWithContext:(id)arg1 ;
-(BOOL)shouldAcceptMessageDonation:(id)arg1 ;
-(void)_syncForTests;
-(void)coalescedHandleIntentOrActivityDeletion;
-(BOOL)_isWhitelistedDaemonDonationBundleId:(id)arg1 ;
-(id)fetchNSUAEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)dealloc;
-(void)processIntentDonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4 ;
-(void)_updateActionPredictionHistogramsRemovingActionUUIDs:(id)arg1 ;
-(void)start;
-(BOOL)shouldProcessNSUADonationsForSessionStartDate:(id)arg1 ;
-(id)init;
-(id)adjustedStartDateForOneSecondFlooringWithAppSessionStartDate:(id)arg1 ;
-(BOOL)shouldProcessIntentDonationsForSessionStartDate:(id)arg1 ;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4 context:(id)arg5 ;
-(void)_displayDonationOnLockscreenWithAction:(id)arg1 ;
-(void)_listenToIntentStream;
-(void)updateActionPredictionPipelineForAppSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)handleIntentOrActivityDeletion;
-(void)_logIntentPredictionsForIntentEvent:(id)arg1 context:(id)arg2 ;
-(void)_updateActionPredictionHistogramsForIntentEvent:(id)arg1 weight:(float)arg2 context:(id)arg3 ;
-(void)_handleCompletedIntentForForUUID:(id)arg1 atxIntentSource:(long long)arg2 ;
-(id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 dataStore:(id)arg4 ;
-(id)fetchIntentEventsForAppSessionWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithAppLaunchHistogramManager:(id)arg1 appInfoManager:(id)arg2 appActionLaunchSequenceManager:(id)arg3 duetHelper:(id)arg4 dataStore:(id)arg5 predictionContextBuilder:(id)arg6 ;
-(id)adjustedEndDateForOneSecondFlooringWithAppSessionEndDate:(id)arg1 ;
-(void)stop;
-(void)updateActionPredictionPipelineForIntentEvent:(id)arg1 weight:(float)arg2 appSessionStartDate:(id)arg3 appSessionEndDate:(id)arg4 ;
-(BOOL)sessionStartedBeforeDonationForStartDate:(id)arg1 latestDonationDate:(id)arg2 ;
-(void)_listenToActivityStream;
-(id)_appActionLaunchSequenceManager;
-(void)processNSUADonationsDuringAppSessionForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 globals:(id)arg4 ;
-(void)removeDonationFromLockscreenForAction:(id)arg1 ;
-(void)handleDonationImmediatelyForBundleId:(id)arg1 intentType:(id)arg2 contextValue:(id)arg3 isDonatedBySiri:(BOOL)arg4 isWhitelistedDaemonDonationBundleId:(BOOL)arg5 ;
-(void)updateActionPredictionSlotResolutionForIntentEvent:(id)arg1 weight:(float)arg2 prevLocationUUID:(id)arg3 locationUUID:(id)arg4 currentMotionType:(long long)arg5 appSessionStartDate:(id)arg6 appSessionEndDate:(id)arg7 geohash:(long long)arg8 coarseGeohash:(long long)arg9 ;
@end
