/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>
+(id)launchServicesAdapterInterface;
+(id)createConnectionWithInterface:(id)arg1 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end
