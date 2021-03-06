/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	BOOL _customViewFlipsHorizontalAxis;
	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL customViewFlipsHorizontalAxis;              //@synthesize customViewFlipsHorizontalAxis=_customViewFlipsHorizontalAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)setCustomView:(UIView *)arg1 ;
-(void)setCustomViewFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)customViewFlipsHorizontalAxis;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(UIView *)customView;
@end

