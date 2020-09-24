/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <UIKitCore/_UILumaTrackingBackdropViewDelegate.h>

@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {

	unsigned long long _luminance;
	BOOL _disabled;
	BOOL _pressed;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                //@synthesize pressed=_pressed - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateAlpha;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2 ;
-(BOOL)isPressed;
-(void)_updateBackgroundEffects;
@end
