/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/BCBatteryDeviceObserving.h>

@class BCBatteryDeviceController, CSBatteryChargingView, CSBatteryChargingInfo, NSString;

@interface CSChargingViewController : CSCoverSheetViewControllerBase <BCBatteryDeviceObserving> {

	BCBatteryDeviceController* _batteryController;
	CSBatteryChargingView* _chargingView;
	CSBatteryChargingInfo* _chargingInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationPriority;
-(long long)presentationType;
-(long long)presentationStyle;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)init;
-(BOOL)handleEvent:(id)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(double)durationBeforeDismissal;
-(void)performDismissalAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateChargingViewIfNecessary;
-(void)_updateChargingViewLegibility;
-(void)_createNewChargingViewForDoubleBattery:(BOOL)arg1 ;
-(id)initWithChargingInfo:(id)arg1 ;
@end
