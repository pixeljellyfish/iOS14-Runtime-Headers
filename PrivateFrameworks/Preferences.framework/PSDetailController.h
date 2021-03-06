/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic,__weak) PSEditingPane * pane; 
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(PSEditingPane *)pane;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setPane:(PSEditingPane *)arg1 ;
-(CGRect)paneFrame;
-(void)loadPane;
-(void)dealloc;
-(id)title;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)suspend;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)saveChanges;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
@end

