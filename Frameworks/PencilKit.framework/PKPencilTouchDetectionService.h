/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_PKTouchDetectionProtocol.h>
#import <libobjc.A.dylib/PKPencilTouchDetectionGestureRecognizerDelegate.h>

@class NSXPCListener, FBSDisplayLayoutMonitor, PKPencilTouchDetectionGestureRecognizer, NSUserDefaults, NSMutableDictionary, NSDictionary, NSString;

@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate> {

	BOOL _isListening;
	BOOL _wereFrontBoardOverlaysEnabled;
	NSXPCListener* _listener;
	FBSDisplayLayoutMonitor* _displayLayoutMonitor;
	PKPencilTouchDetectionGestureRecognizer* _detectionGesture;
	NSUserDefaults* _pencilDefaults;
	NSMutableDictionary* _timestamps;
	NSDictionary* _userInfoForNotification;

}

@property (nonatomic,retain) NSXPCListener * listener;                                                //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) BOOL isListening;                                                        //@synthesize isListening=_isListening - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * displayLayoutMonitor;                          //@synthesize displayLayoutMonitor=_displayLayoutMonitor - In the implementation block
@property (assign,nonatomic) BOOL wereFrontBoardOverlaysEnabled;                                      //@synthesize wereFrontBoardOverlaysEnabled=_wereFrontBoardOverlaysEnabled - In the implementation block
@property (nonatomic,retain) PKPencilTouchDetectionGestureRecognizer * detectionGesture;              //@synthesize detectionGesture=_detectionGesture - In the implementation block
@property (nonatomic,retain) NSUserDefaults * pencilDefaults;                                         //@synthesize pencilDefaults=_pencilDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timestamps;                                        //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfoForNotification;                                  //@synthesize userInfoForNotification=_userInfoForNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)beginObservingTouchesForDetection;
-(void)setDisplayLayoutMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)_nop:(id)arg1 ;
-(BOOL)isListening;
-(NSMutableDictionary *)timestamps;
-(void)reset:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setIsListening:(BOOL)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(void)setTimestamps:(NSMutableDictionary *)arg1 ;
-(FBSDisplayLayoutMonitor *)displayLayoutMonitor;
-(id)init;
-(NSDictionary *)userInfoForNotification;
-(NSXPCListener *)listener;
-(void)updateTimestampForType:(long long)arg1 ;
-(void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)resumeConnectionIfIdle;
-(BOOL)wereFrontBoardOverlaysEnabled;
-(void)persistTimestamps;
-(void)postUpdateNotificationIfNecessary;
-(void)setWereFrontBoardOverlaysEnabled:(BOOL)arg1 ;
-(void)setUserInfoForNotification:(NSDictionary *)arg1 ;
-(NSUserDefaults *)pencilDefaults;
-(void)setPencilDefaults:(NSUserDefaults *)arg1 ;
-(void)loadDefaultsIfNecessary;
-(void)loadTimestampsIfNecessary;
-(BOOL)timestampIndicatesRecentUsage:(id)arg1 ;
-(PKPencilTouchDetectionGestureRecognizer *)detectionGesture;
-(void)setDetectionGesture:(PKPencilTouchDetectionGestureRecognizer *)arg1 ;
@end
