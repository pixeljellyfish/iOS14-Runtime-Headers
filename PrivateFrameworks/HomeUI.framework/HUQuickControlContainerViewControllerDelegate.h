/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlContainerViewControllerDelegate <NSObject>
@required
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2;
-(double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2;
-(id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(BOOL)arg3;
-(id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(BOOL)arg2;
-(void)quickControlViewControllerDidTapDetailsButton:(id)arg1;

@end
