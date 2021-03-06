/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVTNotifyingContainerViewDelegate;
@interface AVTNotifyingContainerView : UIView {

	id<AVTNotifyingContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AVTNotifyingContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AVTNotifyingContainerViewDelegate>)arg1 ;
-(id<AVTNotifyingContainerViewDelegate>)delegate;
@end

