/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCHacks : NSObject
+(id)sharedHacks;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1 ;
-(id)quantizedGracePeriodInSeconds:(id)arg1 ;
-(id)quantizedAutoLockInSeconds:(id)arg1 ;
-(BOOL)isSetupBuddyDone;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1 ;
-(id)permittedAutoLockNumbers;
-(BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isJapanSKU;
-(id)_permittedGracePeriodNumbers;
-(id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2 ;
-(id)profileTrustEvaluators;
-(void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3 ;
-(void)_applyHeuristicsToEffectiveUserSettings:(id)arg1 ;
-(void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg1 ;
-(void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)arg1 ;
-(void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1 ;
-(id)_deviceSpecificDefaultSettings;
-(void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1 ;
-(void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1 ;
-(BOOL)isGreenTea;
@end
