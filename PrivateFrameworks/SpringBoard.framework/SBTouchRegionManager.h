/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, SBBackBoardServicesInterface, FBSDisplayLayoutMonitor, SBMedusa1oSettings, NSString;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	SBBackBoardServicesInterface* _queue_bksInterface;
	FBSDisplayLayoutMonitor* _queue_displayLayoutMonitor;
	SBMedusa1oSettings* _medusaSettings;
	double _queue_touchRegionBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDisplayLayoutMonitor:(id)arg1 ;
-(id)_queue_calculateTouchRegionsFromSceneRects:(id)arg1 ;
-(id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg1 ;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)touchRegionBuffer;
-(id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2 ;
-(id)displayLayoutMonitor;
-(id)init;
-(void)setTouchRegionBuffer:(double)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)_queue_displayLayoutDidUpdate:(id)arg1 ;
-(id)_queue_floatingHitTestRegionForLayoutRect:(CGRect)arg1 ;
@end
