/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/CKImpactEffectAnimationProvider.h>

@protocol CKSendAnimationManager, OS_dispatch_group;
@class CAEmitterLayer, NSObject, NSString;

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider> {

	id<CKSendAnimationManager> _animationDelegate;
	CAEmitterLayer* _dustEmitter;
	NSObject*<OS_dispatch_group> _throwAnimationGroup;

}

@property (nonatomic,retain) CAEmitterLayer * dustEmitter;                                     //@synthesize dustEmitter=_dustEmitter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> throwAnimationGroup;                 //@synthesize throwAnimationGroup=_throwAnimationGroup - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationManager> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginAnimationWithSendAnimationContext:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)throwAnimationGroup;
-(void)setDustEmitter:(CAEmitterLayer *)arg1 ;
-(void)_beginImpactAnimationWithContext:(id)arg1 ;
-(void)_beginGentleAnimationWithContext:(id)arg1 ;
-(void)_beginLoudAnimationsWithContext:(id)arg1 ;
-(void)_beginFocusAnimationWithContext:(id)arg1 ;
-(void)setThrowAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_beginThrowAnimationWithContext:(id)arg1 ;
-(void)setAnimationDelegate:(id<CKSendAnimationManager>)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CAEmitterLayer *)dustEmitter;
-(id<CKSendAnimationManager>)animationDelegate;
-(void)stopAnimationWithSendAnimationContext:(id)arg1 ;
@end
