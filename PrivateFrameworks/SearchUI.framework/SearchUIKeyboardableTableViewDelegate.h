/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchUIKeyboardableTableViewDelegate <NSObject>
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent; 
@required
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)didFocusOnCell:(id)arg1;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1;
-(void)didScrollPastBottomOfContent;

@end
