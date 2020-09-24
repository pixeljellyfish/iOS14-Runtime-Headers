/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSMutableSet, NSString;

@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _qrCodeUserNotificationCenter;
	UNUserNotificationCenter* _nfcUserNotificationCenter;
	NSMutableSet* _notifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(id)init;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)_configureUserNotificationCenter;
-(void)_addRequestForNotification:(id)arg1 codeType:(long long)arg2 ;
-(id)_userNotificationCenterForCodeType:(long long)arg1 ;
-(id)_notificationWithIdentifier:(id)arg1 ;
-(void)scheduleNotification:(id)arg1 codeType:(long long)arg2 ;
-(void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2 ;
@end
