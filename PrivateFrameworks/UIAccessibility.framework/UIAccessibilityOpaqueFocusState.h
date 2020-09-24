/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject {

	BOOL _hasFocus;
	BOOL _hasBeenReused;
	id _element;
	UIView* _reusableView;
	CGRect _sceneRelativeFrame;

}

@property (assign,nonatomic,__weak) id element;                      //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) BOOL hasFocus;                          //@synthesize hasFocus=_hasFocus - In the implementation block
@property (assign,nonatomic) CGRect sceneRelativeFrame;              //@synthesize sceneRelativeFrame=_sceneRelativeFrame - In the implementation block
@property (nonatomic,retain) UIView * reusableView;                  //@synthesize reusableView=_reusableView - In the implementation block
@property (assign,nonatomic) BOOL hasBeenReused;                     //@synthesize hasBeenReused=_hasBeenReused - In the implementation block
-(BOOL)hasFocus;
-(void)setReusableView:(UIView *)arg1 ;
-(CGRect)sceneRelativeFrame;
-(void)setHasBeenReused:(BOOL)arg1 ;
-(void)setSceneRelativeFrame:(CGRect)arg1 ;
-(id)element;
-(void)setElement:(id)arg1 ;
-(BOOL)hasBeenReused;
-(void)setHasFocus:(BOOL)arg1 ;
-(UIView *)reusableView;
-(id)description;
@end
