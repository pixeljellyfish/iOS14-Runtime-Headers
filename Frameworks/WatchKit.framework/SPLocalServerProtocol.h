/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPLocalServerProtocol <NSObject>
@required
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1;

@end

