/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIScreenBasedObject.h>

@protocol UISplitKeyboardSource;
@class UIScreen, UIWindowScene, NSDictionary, NSString;

@interface UIKeyboardMotionSupport : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	UIWindowScene* _canvas;
	id<UISplitKeyboardSource> _controller;

}

@property (assign,nonatomic) id<UISplitKeyboardSource> masterController; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportForUIScene:(id)arg1 ;
+(id)supportForScreen:(id)arg1 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(id)_intendedCanvas;
-(NSDictionary *)_options;
-(id<UISplitKeyboardSource>)masterController;
-(void)setMasterController:(id<UISplitKeyboardSource>)arg1 ;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(UIScreen *)_intendedScreen;
@end

