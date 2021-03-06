/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface WFColoredDotButton : UIButton {

	UIColor* _dotColor;
	UIView* _dotView;

}

@property (assign,nonatomic,__weak) UIView * dotView;              //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,copy) UIColor * dotColor;                     //@synthesize dotColor=_dotColor - In the implementation block
-(UIView *)dotView;
-(void)layoutSubviews;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setDotView:(UIView *)arg1 ;
@end

