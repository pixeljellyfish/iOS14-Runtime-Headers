/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCSServerXPC <NSObject>
@required
-(void)disconnectCall:(id)arg1;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3;
-(void)ensureUplinkMuted;
-(void)queryIsTinCannable:(id)arg1;

@end
