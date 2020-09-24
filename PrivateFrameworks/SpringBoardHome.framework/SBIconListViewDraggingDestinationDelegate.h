/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionBehaviorDelegate.h>
#import <libobjc.A.dylib/SBFSpringLoadedInteractionEffectDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIDropInteractionDelegate.h>

@protocol SBIconListViewDraggingPolicyHandling;
@class NSMapTable, NSMutableSet, SBIconListView, UIDropInteraction, NSString;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate> {

	NSMapTable* _dragObservers;
	NSMutableSet* _activeDropSessionIdentifiers;
	NSMutableSet* _dropSessionIdentifiersWaitingForConcludeDrop;
	BOOL _waitingForConcludeDrag;
	SBIconListView* _iconListView;
	UIDropInteraction* _dropInteraction;
	unsigned long long _currentDragType;
	id<SBIconListViewDraggingPolicyHandling> _currentPolicyHandler;
	unsigned long long _currentSpringLoadedDragType;
	id<SBIconListViewDraggingPolicyHandling> _springLoadingPolicyHandler;

}

@property (nonatomic,readonly) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic) unsigned long long currentDragType;                                               //@synthesize currentDragType=_currentDragType - In the implementation block
@property (nonatomic,retain) id<SBIconListViewDraggingPolicyHandling> currentPolicyHandler;                    //@synthesize currentPolicyHandler=_currentPolicyHandler - In the implementation block
@property (assign,nonatomic) unsigned long long currentSpringLoadedDragType;                                   //@synthesize currentSpringLoadedDragType=_currentSpringLoadedDragType - In the implementation block
@property (nonatomic,retain) id<SBIconListViewDraggingPolicyHandling> springLoadingPolicyHandler;              //@synthesize springLoadingPolicyHandler=_springLoadingPolicyHandler - In the implementation block
@property (assign,getter=isWaitingForConcludeDrag,nonatomic) BOOL waitingForConcludeDrag;                      //@synthesize waitingForConcludeDrag=_waitingForConcludeDrag - In the implementation block
@property (nonatomic,__weak,readonly) SBIconListView * iconListView;                                           //@synthesize iconListView=_iconListView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)dragTypeForDropSession:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)setCurrentDragType:(unsigned long long)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(SBIconListView *)iconListView;
-(UIDropInteraction *)dropInteraction;
-(void)setCurrentPolicyHandler:(id<SBIconListViewDraggingPolicyHandling>)arg1 ;
-(void)_resetSpringLoadingPolicyHandler;
-(BOOL)isWaitingForConcludeDrag;
-(void)_handleSpringloadAndComplete:(id)arg1 ;
-(void)addDragObserver:(id)arg1 forDropSession:(id)arg2 ;
-(void)setSpringLoadingPolicyHandler:(id<SBIconListViewDraggingPolicyHandling>)arg1 ;
-(void)removeAllDragObserversForDropSession:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)updateCurrentPolicyHandlerForDropSession:(id)arg1 ;
-(BOOL)isDropSessionWaitingForConcludeDrop:(id)arg1 ;
-(id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(CGPoint)arg2 forDropSession:(id)arg3 ;
-(void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1 ;
-(id)targetViewForSpringLoadingEffectForView:(id)arg1 ;
-(id)uniqueIdentifierForDropSession:(id)arg1 ;
-(void)markDropSessionAsWaitingForConcludeDrop:(id)arg1 ;
-(id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id<SBIconListViewDraggingPolicyHandling>)springLoadingPolicyHandler;
-(id<SBIconListViewDraggingPolicyHandling>)currentPolicyHandler;
-(BOOL)updateSpringLoadedPolicyHandlerForDropSession:(id)arg1 ;
-(void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)springLoadedInteractionDidFinish;
-(id)succinctDescriptionBuilder;
-(void)setCurrentSpringLoadedDragType:(unsigned long long)arg1 ;
-(unsigned long long)currentDragType;
-(id)succinctDescription;
-(void)setWaitingForConcludeDrag:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithIconListView:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)currentSpringLoadedDragType;
@end
