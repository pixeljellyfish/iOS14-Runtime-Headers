/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMControlDrawerExpandableButton
@property (assign,nonatomic) UIEdgeInsets expansionInsets; 
@property (assign,nonatomic,__weak) id<CAMControlDrawerExpandableButtonDelegate> delegate; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded; 
@required
-(void)setExpanded:(BOOL)arg1;
-(BOOL)isExpanded;
-(void)setDelegate:(id)arg1;
-(id<CAMControlDrawerExpandableButtonDelegate>)delegate;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setExpansionInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)expansionInsets;

@end

