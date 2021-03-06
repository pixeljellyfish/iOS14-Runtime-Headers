/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateSettingsUI.framework/SoftwareUpdateSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSNumber;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController {

	PSSpecifier* _automaticUpdateGroup;
	PSSpecifier* _automaticUpdateSwitchSpecifier;
	PSSpecifier* _automaticDownloadGroup;
	PSSpecifier* _automaticDownloadSwitchSpecifier;
	NSNumber* _userSpecifiedAutoUpdateValue;

}

@property (nonatomic,retain) PSSpecifier * automaticUpdateGroup;                          //@synthesize automaticUpdateGroup=_automaticUpdateGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticUpdateSwitchSpecifier;                //@synthesize automaticUpdateSwitchSpecifier=_automaticUpdateSwitchSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticDownloadGroup;                        //@synthesize automaticDownloadGroup=_automaticDownloadGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticDownloadSwitchSpecifier;              //@synthesize automaticDownloadSwitchSpecifier=_automaticDownloadSwitchSpecifier - In the implementation block
@property (nonatomic,retain) NSNumber * userSpecifiedAutoUpdateValue;                     //@synthesize userSpecifiedAutoUpdateValue=_userSpecifiedAutoUpdateValue - In the implementation block
-(id)updateController;
-(id)specifiers;
-(void)setAutomaticUpdatesFromUI:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomaticDownloadFromUI:(id)arg1 forSpecifier:(id)arg2 ;
-(id)automaticUpdateStatus;
-(id)automaticDownloadStatus;
-(void)setAutomaticDownloadGroup:(PSSpecifier *)arg1 ;
-(void)setAutomaticUpdateGroup:(PSSpecifier *)arg1 ;
-(void)setupAutoUpdateSwitchSpecifier;
-(void)setupAutoDownloadSwitchSpecifier;
-(void)setUserSpecifiedAutoUpdateValue:(NSNumber *)arg1 ;
-(PSSpecifier *)automaticDownloadGroup;
-(PSSpecifier *)automaticDownloadSwitchSpecifier;
-(PSSpecifier *)automaticUpdateGroup;
-(PSSpecifier *)automaticUpdateSwitchSpecifier;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAutomaticUpdateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(id)autoDownloadGroupFooterTextForAutomaticDownloadStatus:(id)arg1 ;
-(void)setAutomaticDownloadSwitchSpecifier:(PSSpecifier *)arg1 ;
-(NSNumber *)userSpecifiedAutoUpdateValue;
-(void)refreshAutoDownloadText;
@end

