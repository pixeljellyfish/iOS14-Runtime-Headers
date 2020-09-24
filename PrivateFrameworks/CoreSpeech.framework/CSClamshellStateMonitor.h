/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSClamshellStateMonitor : CSEventMonitor
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withClamshellState:(BOOL)arg2 ;
-(BOOL)isClamshellClosed;
-(void)_didReceiveClamshellStateChangeNotification:(BOOL)arg1 ;
@end
