/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface _SBValueConvergenceAnimatorEngine : NSObject {

	NSMutableSet* _animators;
	CADisplayLink* _displayLink;
	NSMutableSet* _finishedAnimators;

}
+(id)sharedEngine;
-(void)_tearDownDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_ensureDisplayLink;
-(void)_updateDisplayLink;
-(void)startAnimator:(id)arg1 ;
-(void)stopAnimator:(id)arg1 ;
-(id)init;
-(BOOL)isRunningAnimator:(id)arg1 ;
-(void)updateAnimator:(id)arg1 ;
@end
