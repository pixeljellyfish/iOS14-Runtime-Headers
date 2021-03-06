/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSArray;

@interface IDSServiceProperties : NSObject <NSCopying> {

	NSString* _launchNotification;
	NSSet* _allowedTrafficClassesIndices;
	NSSet* _duetIdentifiersIndices;
	unsigned _allowLocalDelivery : 1;
	unsigned _allowWiProxDelivery : 1;
	unsigned _allowMagnetDelivery : 1;
	unsigned _shouldShowUsageNotifications : 1;
	unsigned _allowPartialSendsToSucceed : 1;
	unsigned _canUseLargePayload : 1;
	unsigned _sendOnePerToken : 1;
	unsigned _wantsPhoneNumberAccount : 1;
	unsigned _iCloudBasedService : 1;
	unsigned _tunnelService : 1;
	unsigned _holdsMessagesUntilFirstUnlock : 1;
	unsigned _shouldAutoRegisterAllHandles : 1;
	unsigned _shouldRegisterUsingDSHandle : 1;
	unsigned _shouldSyncAccounts : 1;
	unsigned _shouldNotSyncPhoneNumberAccounts : 1;
	unsigned _shouldAllowProxyDelivery : 1;
	unsigned _wantsLocalReflectedSend : 1;
	unsigned _wantsCheckTransportLogHint : 1;
	unsigned _watchOnlyService : 1;
	unsigned _allowsDuplicates : 1;
	unsigned _useiMessageCallerID : 1;
	unsigned _useFaceTimeCallerID : 1;
	unsigned _allowPendingMessagesForInactiveDevice : 1;
	unsigned _allowSendingMessagesToInactiveDevice : 1;
	unsigned _shouldProtectTrafficUsingClassA : 1;
	unsigned _shouldSilentlyFailMessagesOnSwitch : 1;
	unsigned _shouldAllowCloudDelivery : 1;
	unsigned _shouldAllowLiveMessageDelivery : 1;
	unsigned _enabledOnlyWhenPaired : 1;
	unsigned _forceHTTPQueriesOnly : 1;
	unsigned _wantsRemoteErrors : 1;
	unsigned _useTransportZone : 1;
	unsigned _shouldFilterInactiveAliases : 1;
	unsigned _dontFilterSelfMessagesForUnknownDevice : 1;
	unsigned _passThroughMessagesFromStorage : 1;
	unsigned _pushToWakeDisabled : 1;
	unsigned _disableOnLowRAMDevice : 1;
	unsigned _wantsPendingMessageUpdates : 1;
	unsigned _disabledOnTinkerWatch : 1;
	unsigned _enabledOnlyOnStandaloneDevices : 1;
	unsigned _tinkerMessagingOnly : 1;
	unsigned _launchIsDarwin : 1;
	unsigned _allowCrossAccountMessages : 1;
	unsigned _blockRemoteTimeouts : 1;
	unsigned _allowWakingMessages : 1;
	unsigned _allowUrgentMessages : 1;
	unsigned _prototypingOnly : 1;
	unsigned char _minCompatibilityVersion;
	unsigned char _accountSyncMinCompatibilityVersion;
	unsigned _adHocServiceType;
	unsigned _dataProtectionClass;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _pushTopic;
	NSString* _serviceName;
	NSString* _queryService;
	NSString* _protocolName;
	NSString* _superService;
	NSString* _dataUsageBundleID;
	long long _linkedDeviceRelationships;
	NSString* _legacyIdentifier;
	NSArray* _linkedServiceNames;

}

@property (nonatomic,retain) NSString * queryService;                                              //@synthesize queryService=_queryService - In the implementation block
@property (nonatomic,retain) NSString * protocolName;                                              //@synthesize protocolName=_protocolName - In the implementation block
@property (nonatomic,retain) NSString * dataUsageBundleID;                                         //@synthesize dataUsageBundleID=_dataUsageBundleID - In the implementation block
@property (nonatomic,retain) NSString * legacyIdentifier;                                          //@synthesize legacyIdentifier=_legacyIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * linkedServiceNames;                                         //@synthesize linkedServiceNames=_linkedServiceNames - In the implementation block
@property (assign,nonatomic) unsigned dataProtectionClass;                                         //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) long long linkedDeviceRelationships;                                  //@synthesize linkedDeviceRelationships=_linkedDeviceRelationships - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * pushTopic;                                                 //@synthesize pushTopic=_pushTopic - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * launchDarwinNotification; 
@property (nonatomic,readonly) NSString * launchMachServiceNotification; 
@property (nonatomic,retain) NSString * superService;                                              //@synthesize superService=_superService - In the implementation block
@property (nonatomic,readonly) BOOL allowLocalDelivery; 
@property (nonatomic,readonly) BOOL allowWiProxDelivery;                                           //@synthesize allowWiProxDelivery=_allowWiProxDelivery - In the implementation block
@property (nonatomic,readonly) BOOL allowMagnetDelivery;                                           //@synthesize allowMagnetDelivery=_allowMagnetDelivery - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUsageNotifications;                                  //@synthesize shouldShowUsageNotifications=_shouldShowUsageNotifications - In the implementation block
@property (nonatomic,readonly) BOOL allowPartialSendsToSucceed;                                    //@synthesize allowPartialSendsToSucceed=_allowPartialSendsToSucceed - In the implementation block
@property (nonatomic,readonly) BOOL canUseLargePayload;                                            //@synthesize canUseLargePayload=_canUseLargePayload - In the implementation block
@property (nonatomic,readonly) BOOL sendOnePerToken;                                               //@synthesize sendOnePerToken=_sendOnePerToken - In the implementation block
@property (nonatomic,readonly) BOOL wantsPhoneNumberAccount;                                       //@synthesize wantsPhoneNumberAccount=_wantsPhoneNumberAccount - In the implementation block
@property (nonatomic,readonly) BOOL iCloudBasedService;                                            //@synthesize iCloudBasedService=_iCloudBasedService - In the implementation block
@property (nonatomic,readonly) BOOL tunnelService;                                                 //@synthesize tunnelService=_tunnelService - In the implementation block
@property (nonatomic,readonly) BOOL holdsMessagesUntilFirstUnlock;                                 //@synthesize holdsMessagesUntilFirstUnlock=_holdsMessagesUntilFirstUnlock - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoRegisterAllHandles;                                  //@synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles - In the implementation block
@property (nonatomic,readonly) BOOL shouldRegisterUsingDSHandle;                                   //@synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle - In the implementation block
@property (nonatomic,readonly) BOOL shouldSyncAccounts;                                            //@synthesize shouldSyncAccounts=_shouldSyncAccounts - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotSyncPhoneNumberAccounts;                              //@synthesize shouldNotSyncPhoneNumberAccounts=_shouldNotSyncPhoneNumberAccounts - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowProxyDelivery;                                      //@synthesize shouldAllowProxyDelivery=_shouldAllowProxyDelivery - In the implementation block
@property (nonatomic,readonly) BOOL wantsLocalReflectedSend;                                       //@synthesize wantsLocalReflectedSend=_wantsLocalReflectedSend - In the implementation block
@property (nonatomic,readonly) BOOL wantsCheckTransportLogHint;                                    //@synthesize wantsCheckTransportLogHint=_wantsCheckTransportLogHint - In the implementation block
@property (nonatomic,readonly) BOOL watchOnlyService;                                              //@synthesize watchOnlyService=_watchOnlyService - In the implementation block
@property (nonatomic,readonly) BOOL allowsDuplicates;                                              //@synthesize allowsDuplicates=_allowsDuplicates - In the implementation block
@property (nonatomic,readonly) BOOL useiMessageCallerID;                                           //@synthesize useiMessageCallerID=_useiMessageCallerID - In the implementation block
@property (nonatomic,readonly) BOOL useFaceTimeCallerID;                                           //@synthesize useFaceTimeCallerID=_useFaceTimeCallerID - In the implementation block
@property (nonatomic,readonly) BOOL allowPendingMessagesForInactiveDevice;                         //@synthesize allowPendingMessagesForInactiveDevice=_allowPendingMessagesForInactiveDevice - In the implementation block
@property (nonatomic,readonly) BOOL allowSendingMessagesToInactiveDevice;                          //@synthesize allowSendingMessagesToInactiveDevice=_allowSendingMessagesToInactiveDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldProtectTrafficUsingClassA;                               //@synthesize shouldProtectTrafficUsingClassA=_shouldProtectTrafficUsingClassA - In the implementation block
@property (nonatomic,readonly) BOOL shouldSilentlyFailMessagesOnSwitch;                            //@synthesize shouldSilentlyFailMessagesOnSwitch=_shouldSilentlyFailMessagesOnSwitch - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowCloudDelivery;                                      //@synthesize shouldAllowCloudDelivery=_shouldAllowCloudDelivery - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowLiveMessageDelivery; 
@property (nonatomic,readonly) BOOL enabledOnlyWhenPaired;                                         //@synthesize enabledOnlyWhenPaired=_enabledOnlyWhenPaired - In the implementation block
@property (nonatomic,readonly) BOOL forceHTTPQueriesOnly;                                          //@synthesize forceHTTPQueriesOnly=_forceHTTPQueriesOnly - In the implementation block
@property (nonatomic,readonly) BOOL wantsRemoteErrors;                                             //@synthesize wantsRemoteErrors=_wantsRemoteErrors - In the implementation block
@property (nonatomic,readonly) BOOL useTransportZone;                                              //@synthesize useTransportZone=_useTransportZone - In the implementation block
@property (nonatomic,readonly) BOOL shouldFilterInactiveAliases;                                   //@synthesize shouldFilterInactiveAliases=_shouldFilterInactiveAliases - In the implementation block
@property (nonatomic,readonly) BOOL dontFilterSelfMessagesForUnknownDevice;                        //@synthesize dontFilterSelfMessagesForUnknownDevice=_dontFilterSelfMessagesForUnknownDevice - In the implementation block
@property (nonatomic,readonly) BOOL passThroughMessagesFromStorage;                                //@synthesize passThroughMessagesFromStorage=_passThroughMessagesFromStorage - In the implementation block
@property (nonatomic,readonly) BOOL pushToWakeDisabled;                                            //@synthesize pushToWakeDisabled=_pushToWakeDisabled - In the implementation block
@property (nonatomic,readonly) BOOL disableOnLowRAMDevice;                                         //@synthesize disableOnLowRAMDevice=_disableOnLowRAMDevice - In the implementation block
@property (nonatomic,readonly) BOOL wantsPendingMessageUpdates;                                    //@synthesize wantsPendingMessageUpdates=_wantsPendingMessageUpdates - In the implementation block
@property (nonatomic,readonly) BOOL allowCrossAccountMessages;                                     //@synthesize allowCrossAccountMessages=_allowCrossAccountMessages - In the implementation block
@property (nonatomic,readonly) BOOL blockRemoteTimeouts;                                           //@synthesize blockRemoteTimeouts=_blockRemoteTimeouts - In the implementation block
@property (nonatomic,readonly) BOOL allowWakingMessages;                                           //@synthesize allowWakingMessages=_allowWakingMessages - In the implementation block
@property (nonatomic,readonly) BOOL allowUrgentMessages;                                           //@synthesize allowUrgentMessages=_allowUrgentMessages - In the implementation block
@property (nonatomic,readonly) BOOL prototypingOnly;                                               //@synthesize prototypingOnly=_prototypingOnly - In the implementation block
@property (nonatomic,readonly) BOOL wantsTinkerDevices; 
@property (nonatomic,readonly) BOOL enabledOnlyOnStandaloneDevices;                                //@synthesize enabledOnlyOnStandaloneDevices=_enabledOnlyOnStandaloneDevices - In the implementation block
@property (nonatomic,readonly) BOOL tinkerMessagingOnly;                                           //@synthesize tinkerMessagingOnly=_tinkerMessagingOnly - In the implementation block
@property (nonatomic,readonly) BOOL disabledOnTinkerWatch;                                         //@synthesize disabledOnTinkerWatch=_disabledOnTinkerWatch - In the implementation block
@property (nonatomic,readonly) NSString * preferencesDomain; 
@property (nonatomic,readonly) NSString * legacyPreferencesDomain; 
@property (nonatomic,readonly) unsigned adHocServiceType;                                          //@synthesize adHocServiceType=_adHocServiceType - In the implementation block
@property (nonatomic,readonly) NSArray * duetIdentifiers; 
@property (nonatomic,readonly) NSSet * allowedTrafficClasses; 
@property (nonatomic,readonly) unsigned long long minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned long long accountSyncMinCompatibilityVersion; 
-(void)setLinkedServiceNames:(NSArray *)arg1 ;
-(NSString *)identifier;
-(BOOL)prototypingOnly;
-(BOOL)tinkerMessagingOnly;
-(BOOL)enabledOnlyOnStandaloneDevices;
-(NSString *)dataUsageBundleID;
-(BOOL)iCloudBasedService;
-(BOOL)shouldSyncAccounts;
-(BOOL)wantsPendingMessageUpdates;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useFaceTimeCallerID;
-(id)_resolveProtocolName:(id)arg1 ;
-(NSString *)displayName;
-(id)initWithServiceDictionary:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setLinkedDeviceRelationships:(long long)arg1 ;
-(void)setProtocolName:(NSString *)arg1 ;
-(unsigned long long)accountSyncMinCompatibilityVersion;
-(BOOL)wantsRemoteErrors;
-(BOOL)shouldProtectTrafficUsingClassA;
-(BOOL)tunnelService;
-(NSArray *)linkedServiceNames;
-(BOOL)allowPartialSendsToSucceed;
-(void)setPushTopic:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)shouldAutoRegisterAllHandles;
-(BOOL)disabledOnTinkerWatch;
-(BOOL)allowUrgentMessages;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(long long)linkedDeviceRelationships;
-(BOOL)blockRemoteTimeouts;
-(unsigned)dataProtectionClass;
-(NSString *)superService;
-(BOOL)disableOnLowRAMDevice;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)passThroughMessagesFromStorage;
-(BOOL)shouldAllowProxyDelivery;
-(BOOL)shouldAllowCloudDelivery;
-(NSString *)preferencesDomain;
-(BOOL)shouldNotSyncPhoneNumberAccounts;
-(NSString *)pushTopic;
-(NSSet *)allowedTrafficClasses;
-(unsigned)adHocServiceType;
-(BOOL)useiMessageCallerID;
-(NSString *)protocolName;
-(BOOL)shouldRegisterUsingDSHandle;
-(BOOL)allowLocalDelivery;
-(void)setLegacyIdentifier:(NSString *)arg1 ;
-(NSString *)launchDarwinNotification;
-(BOOL)enabledOnlyWhenPaired;
-(BOOL)allowWiProxDelivery;
-(BOOL)allowsDuplicates;
-(BOOL)allowCrossAccountMessages;
-(BOOL)allowPendingMessagesForInactiveDevice;
-(BOOL)allowWakingMessages;
-(id)_identifierWithProtocolAndMachServiceSuffix;
-(BOOL)allowMagnetDelivery;
-(NSString *)launchMachServiceNotification;
-(BOOL)dontFilterSelfMessagesForUnknownDevice;
-(BOOL)holdsMessagesUntilFirstUnlock;
-(BOOL)wantsCheckTransportLogHint;
-(id)initWithServiceIdentifier:(id)arg1 ;
-(BOOL)wantsLocalReflectedSend;
-(BOOL)wantsPhoneNumberAccount;
-(void)setQueryService:(NSString *)arg1 ;
-(BOOL)shouldShowUsageNotifications;
-(NSString *)serviceName;
-(void)setSuperService:(NSString *)arg1 ;
-(void)setDataUsageBundleID:(NSString *)arg1 ;
-(id)_resolveShouldUseMachNotification:(id)arg1 ;
-(unsigned long long)minCompatibilityVersion;
-(BOOL)shouldSilentlyFailMessagesOnSwitch;
-(BOOL)pushToWakeDisabled;
-(BOOL)allowSendingMessagesToInactiveDevice;
-(BOOL)forceHTTPQueriesOnly;
-(BOOL)watchOnlyService;
-(BOOL)canUseLargePayload;
-(BOOL)shouldFilterInactiveAliases;
-(NSString *)legacyIdentifier;
-(BOOL)shouldAllowLiveMessageDelivery;
-(NSArray *)duetIdentifiers;
-(NSString *)legacyPreferencesDomain;
-(BOOL)useTransportZone;
-(BOOL)wantsTinkerDevices;
-(id)description;
-(BOOL)sendOnePerToken;
-(NSString *)queryService;
-(void)reloadAdHocServices;
-(id)_stringToUseGivenName:(id)arg1 ;
@end

