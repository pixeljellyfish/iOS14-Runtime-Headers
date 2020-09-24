/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DASActivityScheduler, OS_dispatch_queue, UNSRemoteNotificationServerObserver;
@class UNSNotificationRepository, UNSNotificationCategoryRepository, UNSAttachmentsService, UNSPushRegistrationRepository, UNSNotificationServiceExtensionManager, BSPlatform, NSObject, NSMutableSet, NSSet, NSMutableDictionary, NSString;

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {

	UNSNotificationRepository* _notificationRepository;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	id<_DASActivityScheduler> _duetActivityScheduler;
	UNSNotificationServiceExtensionManager* _serviceExtensionManager;
	BSPlatform* _platform;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _apsQueue;
	NSMutableSet* _cloudKitBundleIdentifiers;
	NSMutableSet* _contentAvailableBundleIdentifiers;
	NSMutableSet* _quietServiceExtensionBundleIdentifiers;
	NSMutableSet* _foregroundBundleIdentifiers;
	NSMutableSet* _installedBundleIdentifiers;
	NSMutableSet* _restrictedBundleIdentifiers;
	NSMutableSet* _runningBundleIdentifiers;
	NSMutableSet* _userNotificationEnabledBundleIdentifiers;
	NSMutableSet* _visibleUserNotificationEnabledBundleIdentifiers;
	NSSet* _backgroundAppRefreshBlackList;
	NSMutableDictionary* _bundleIdentifierToRegistration;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	id<UNSRemoteNotificationServerObserver> _observer;

}

@property (assign,nonatomic) id<UNSRemoteNotificationServerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 extensionStart:(id)arg5 extensionEnd:(id)arg6 ;
-(void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2 ;
-(id)_queue_allTopicsForApplication:(id)arg1 ;
-(void)_queue_didReceiveIncomingMessage:(id)arg1 ;
-(void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 ;
-(void)_queue_reloadBackgroundAppRefreshBlackList;
-(void)didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_applicationDidBecomeForeground:(id)arg1 ;
-(void)dealloc;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(BOOL)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1 ;
-(void)_queue_didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_queue_calculateTopics;
-(void)_queue_performMigration;
-(void)_queue_didCompleteInitialization;
-(void)backgroundRefreshApplicationsDidChange;
-(void)_queue_applicationDidLaunch:(id)arg1 ;
-(BOOL)_queue_isVisibleUserNotificationEnabledForApplication:(id)arg1 ;
-(void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)performMigration;
-(BOOL)_queue_canDeliverMessageToBundle:(id)arg1 ;
-(void)notificationSourcesDidInstall:(id)arg1 ;
-(BOOL)_queue_isApplicationForeground:(id)arg1 ;
-(void)setObserver:(id<UNSRemoteNotificationServerObserver>)arg1 ;
-(void)_queue_removeRegistrationForBundleIdentifier:(id)arg1 ;
-(void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 enforcePushType:(BOOL)arg5 ;
-(BOOL)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)_queue_invalidateTokenForBundleIdentifier:(id)arg1 ;
-(void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(BOOL)arg4 ;
-(void)_queue_reloadRegistrations;
-(void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id<UNSRemoteNotificationServerObserver>)observer;
-(void)_queue_applicationDidTerminate:(id)arg1 ;
-(void)_queue_backgroundRefreshApplicationsDidChange;
-(BOOL)_queue_isPushEnabledForApplication:(id)arg1 ;
-(void)didCompleteInitialization;
-(id)_initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5 queue:(id)arg6 apsQueue:(id)arg7 duetActivityScheduler:(id)arg8 serviceExtensionManager:(id)arg9 ;
-(BOOL)_queue_isUserNotificationEnabledForApplication:(id)arg1 ;
-(void)_queue_applicationDidBecomeBackground:(id)arg1 ;
-(void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(id)initWithNotificationRepository:(id)arg1 attachmentsService:(id)arg2 categoryRepository:(id)arg3 pushRegistrationRepository:(id)arg4 platform:(id)arg5 ;
-(BOOL)_queue_allowServiceExtensionFilteringForMessage:(id)arg1 ;
-(void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3 ;
-(BOOL)_queue_messageIsValidForDelivery:(id)arg1 ;
-(BOOL)_queue_isApplicationRunning:(id)arg1 ;
-(BOOL)_queue_enforcePushTypeForMessage:(id)arg1 ;
-(void)_queue_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
@end
