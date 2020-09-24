/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController {

	NSArray* _appsList;

}

@property (nonatomic,retain) NSArray * appsList;              //@synthesize appsList=_appsList - In the implementation block
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)primaryAppSpecifier;
-(BOOL)shouldShowMoreApps;
-(void)moreAppsTapped:(id)arg1 ;
@end
