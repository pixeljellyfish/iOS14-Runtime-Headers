/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>
#import <libobjc.A.dylib/HUDataAnalyticsModuleControllerDelegate.h>

@protocol HFMediaProfileContainer;
@class HUActivityLoadingView, HUDataAnalyticsModuleController, NSString;

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUDataAnalyticsModuleControllerDelegate> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HUActivityLoadingView* _activityLoadingView;
	HUDataAnalyticsModuleController* _analyticsModuleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HUActivityLoadingView * activityLoadingView;                              //@synthesize activityLoadingView=_activityLoadingView - In the implementation block
@property (nonatomic,readonly) HUDataAnalyticsModuleController * analyticsModuleController;              //@synthesize analyticsModuleController=_analyticsModuleController - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                        //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)dataAnalyticsModuleController:(id)arg1 didSelectItem:(id)arg2 ;
-(void)viewDidLoad;
-(id)init;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)itemModuleControllers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)hu_preloadContent;
-(HUActivityLoadingView *)activityLoadingView;
-(void)_watchForReload;
-(HUDataAnalyticsModuleController *)analyticsModuleController;
-(void)_kickoffReload;
-(BOOL)bypassInitialItemUpdateReload;
@end
