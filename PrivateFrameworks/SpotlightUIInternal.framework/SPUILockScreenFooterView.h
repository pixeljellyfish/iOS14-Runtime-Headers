/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextButton;

@interface SPUILockScreenFooterView : NUIContainerBoxView {

	TLKTextButton* _unlockScreenButton;

}

@property (retain) TLKTextButton * unlockScreenButton;              //@synthesize unlockScreenButton=_unlockScreenButton - In the implementation block
-(void)unlockButtonPressed:(id)arg1 ;
-(id)init;
-(TLKTextButton *)unlockScreenButton;
-(void)updateTitle;
-(void)setUnlockScreenButton:(TLKTextButton *)arg1 ;
@end

