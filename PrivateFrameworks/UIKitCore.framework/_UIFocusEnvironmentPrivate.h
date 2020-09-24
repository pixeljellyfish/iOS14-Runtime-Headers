/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@optional
-(BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)arg1;
-(BOOL)_isEligibleForFocusInteraction;
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_linearFocusMovementSequences;
-(BOOL)_reversesLinearFocusWrapping;
-(long long)_preferredFocusMovementStyle;
-(void)setAreChildrenFocused:(BOOL)arg1;
-(id)_focusGroupDescriptor;
-(BOOL)areChildrenFocused;

@end
