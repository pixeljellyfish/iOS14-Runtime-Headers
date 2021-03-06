/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver> {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLookupContext;
-(void)dealloc;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURL:(id)arg1 ignoreEnableState:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setSafeBrowsingEnabledStateNeedsUpdate;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getSafeBrowsingEnabledState:(/*^block*/id)arg1 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteAllDatabasesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_forceLookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
@end

