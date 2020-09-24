/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HUCameraRecordingOptionsItemManager, HUCameraSettingsModuleController, NSString;

@interface HUCameraRecordingOptionsTableViewController : HUItemTableViewController <UITextViewDelegate> {

	HUCameraRecordingOptionsItemManager* _detailsItemManager;
	HUCameraSettingsModuleController* _cameraSettingsModuleController;

}

@property (assign,nonatomic,__weak) HUCameraRecordingOptionsItemManager * detailsItemManager;                //@synthesize detailsItemManager=_detailsItemManager - In the implementation block
@property (nonatomic,retain) HUCameraSettingsModuleController * cameraSettingsModuleController;              //@synthesize cameraSettingsModuleController=_cameraSettingsModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewDidLoad;
-(id)itemModuleControllers;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(void)dismissTextViewController;
-(HUCameraRecordingOptionsItemManager *)detailsItemManager;
-(void)setDetailsItemManager:(HUCameraRecordingOptionsItemManager *)arg1 ;
-(HUCameraSettingsModuleController *)cameraSettingsModuleController;
-(void)setCameraSettingsModuleController:(HUCameraSettingsModuleController *)arg1 ;
@end
