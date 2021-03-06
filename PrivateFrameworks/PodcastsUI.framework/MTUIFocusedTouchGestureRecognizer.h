/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface MTUIFocusedTouchGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	BOOL _didTouchOutside;
	UIView* _focusedView;
	UIEdgeInsets _touchAllowance;

}

@property (nonatomic,readonly) UIView * focusedView;                   //@synthesize focusedView=_focusedView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchAllowance;              //@synthesize touchAllowance=_touchAllowance - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(UIView *)focusedView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
@end

