/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, NSMapTable;

@interface MPAssistantAnalyticsReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSString* _lastSiriReferenceIdentifierForPlaybackStart;
	NSString* _lastSiriReferenceIdentifierForWillReload;
	NSString* _lastSiriReferenceIdentifierWithLikelyToKeepUp;
	NSHashTable* _players;
	NSMapTable* _playerToObservedTimebase;

}
+(id)sharedController;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2 ;
-(void)unregisterPlayer:(id)arg1 ;
-(void)_itemTimebaseDidChangeNotification:(id)arg1 ;
-(void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1 ;
-(void)_willReloadWithPlaybackContextNotification:(id)arg1 ;
-(id)_init;
-(void)_timebaseEffectiveRateChangedNotification;
-(void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1 ;
-(void)registerPlayer:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
@end
