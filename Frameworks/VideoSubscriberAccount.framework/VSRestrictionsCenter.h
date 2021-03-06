/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class MCProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject <MCProfileConnectionObserver> {

	BOOL _accountModificationAllowed;
	MCProfileConnection* _profileConnection;

}

@property (assign,getter=isAcountModificationAllowed,nonatomic) BOOL accountModificationAllowed;              //@synthesize accountModificationAllowed=_accountModificationAllowed - In the implementation block
@property (nonatomic,retain) MCProfileConnection * profileConnection;                                         //@synthesize profileConnection=_profileConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultRestrictionsCenter;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(void)dealloc;
-(id)init;
-(MCProfileConnection *)profileConnection;
-(void)_updateAccountModificationAllowed;
-(void)setAccountModificationAllowed:(BOOL)arg1 ;
-(BOOL)_canInstallAppsAtAll;
-(BOOL)canInstallAppWithRating:(long long)arg1 ;
-(BOOL)isAcountModificationAllowed;
@end

