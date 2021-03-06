/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _animationDidStartHandler;
	/*^block*/id _animationDidStopHandler;

}

@property (nonatomic,copy) id animationDidStartHandler;              //@synthesize animationDidStartHandler=_animationDidStartHandler - In the implementation block
@property (nonatomic,copy) id animationDidStopHandler;               //@synthesize animationDidStopHandler=_animationDidStopHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)animationDidStartHandler;
-(void)setAnimationDidStartHandler:(id)arg1 ;
-(id)animationDidStopHandler;
-(void)setAnimationDidStopHandler:(id)arg1 ;
@end

