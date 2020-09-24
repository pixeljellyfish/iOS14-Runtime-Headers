/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {

	NSLock* _lock;
	NSArray* _accountProxies;
	int _lastSourceAccountManagementQueried;
	BOOL _registeredForNotifications;
	int _notifyToken;

}
+(id)defaultInstance;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg1 ;
-(void)dealloc;
-(id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end
