/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HUAlarmEditSettingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>
#import <libobjc.A.dylib/HUInlineDatePickerCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegatePrivate.h>

@protocol HUAlarmEditViewControllerDelegate, HFMediaProfileContainer;
@class NSString, NSSet, HUAlarmEditView, MTAlarm, MTMutableAlarm, HFPlaybackArchive, NSMutableDictionary, NSDateComponents, HMMediaProfile, UITapGestureRecognizer;

@interface HUAlarmEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate, HUInlineDatePickerCellDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, MPMediaPickerControllerDelegatePrivate> {

	BOOL _isCustomVolumeSelected;
	BOOL _isPlayMediaSelected;
	BOOL _isDatePickerWheelScrolled;
	id<HUAlarmEditViewControllerDelegate> _delegate;
	NSString* _loggedInAppleMusicAccountDSID;
	NSSet* _selectedActionSets;
	HUAlarmEditView* _editAlarmView;
	long long _editingAlarmSetting;
	MTAlarm* _originalAlarm;
	MTMutableAlarm* _editedAlarm;
	double _selectedCustomVolumeLevel;
	HFPlaybackArchive* _hfPlaybackArchive;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableDictionary* _appleMusicSubcriptionResult;
	NSDateComponents* _currentDatePickerTimeComponents;
	HMMediaProfile* _originalSelectedMediaProfile;
	HMMediaProfile* _selectedMediaProfile;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) HUAlarmEditView * editAlarmView;                                    //@synthesize editAlarmView=_editAlarmView - In the implementation block
@property (assign,nonatomic) long long editingAlarmSetting;                                      //@synthesize editingAlarmSetting=_editingAlarmSetting - In the implementation block
@property (nonatomic,retain) MTAlarm * originalAlarm;                                            //@synthesize originalAlarm=_originalAlarm - In the implementation block
@property (nonatomic,retain) MTMutableAlarm * editedAlarm;                                       //@synthesize editedAlarm=_editedAlarm - In the implementation block
@property (getter=isEdited,nonatomic,readonly) BOOL edited; 
@property (assign,nonatomic) double selectedCustomVolumeLevel;                                   //@synthesize selectedCustomVolumeLevel=_selectedCustomVolumeLevel - In the implementation block
@property (assign,nonatomic) BOOL isCustomVolumeSelected;                                        //@synthesize isCustomVolumeSelected=_isCustomVolumeSelected - In the implementation block
@property (assign,nonatomic) BOOL isPlayMediaSelected;                                           //@synthesize isPlayMediaSelected=_isPlayMediaSelected - In the implementation block
@property (nonatomic,retain) HFPlaybackArchive * hfPlaybackArchive;                              //@synthesize hfPlaybackArchive=_hfPlaybackArchive - In the implementation block
@property (nonatomic,retain) id<HFMediaProfileContainer> mediaProfileContainer;                  //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appleMusicSubcriptionResult;                  //@synthesize appleMusicSubcriptionResult=_appleMusicSubcriptionResult - In the implementation block
@property (assign,nonatomic) BOOL isDatePickerWheelScrolled;                                     //@synthesize isDatePickerWheelScrolled=_isDatePickerWheelScrolled - In the implementation block
@property (nonatomic,retain) NSDateComponents * currentDatePickerTimeComponents;                 //@synthesize currentDatePickerTimeComponents=_currentDatePickerTimeComponents - In the implementation block
@property (nonatomic,retain) HMMediaProfile * originalSelectedMediaProfile;                      //@synthesize originalSelectedMediaProfile=_originalSelectedMediaProfile - In the implementation block
@property (nonatomic,retain) HMMediaProfile * selectedMediaProfile;                              //@synthesize selectedMediaProfile=_selectedMediaProfile - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                      //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * loggedInAppleMusicAccountDSID;                             //@synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID - In the implementation block
@property (nonatomic,readonly) NSSet * selectedActionSets;                                       //@synthesize selectedActionSets=_selectedActionSets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)desiredContentSize;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)_dateComponents;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)_didTap:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)datePickerCell:(id)arg1 didSelectDate:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2 ;
-(void)loadView;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(void)viewDidUnload;
-(void)setDelegate:(id<HUAlarmEditViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<HUAlarmEditViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isEdited;
-(MTAlarm *)originalAlarm;
-(void)setOriginalAlarm:(MTAlarm *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSelectedCustomVolumeLevel:(double)arg1 ;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)_doneButtonClicked:(id)arg1 ;
-(void)_handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg1 ;
-(MTMutableAlarm *)editedAlarm;
-(BOOL)_isNewAlarm;
-(BOOL)_isDeviceSpecificAlarm;
-(id)_datePickerCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(HMMediaProfile *)selectedMediaProfile;
-(BOOL)_hasUserSelectedToneAlarm;
-(HFPlaybackArchive *)hfPlaybackArchive;
-(BOOL)_isAlarmTypeMedia;
-(void)_configureMediaIconView:(id)arg1 withImage:(id)arg2 ;
-(id)_deleteAlarmButtonCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_mediaPropertiesTypeCellForTableView:(id)arg1 atIndexpath:(id)arg2 ;
-(id)_volumeTypeCellForTableView:(id)arg1 atIndexpath:(id)arg2 ;
-(BOOL)_hasUserSelectedCustomVolume;
-(id)_volumeSliderCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)startEditingSetting:(long long)arg1 ;
-(id)_volumeIconMinimum;
-(id)_volumeIconMaximum;
-(double)_volumeSettingForCurrentEditingAlarm;
-(BOOL)isDatePickerWheelScrolled;
-(void)setCurrentDatePickerTimeComponents:(NSDateComponents *)arg1 ;
-(BOOL)isCustomVolumeSelected;
-(BOOL)isPlayMediaSelected;
-(HMMediaProfile *)originalSelectedMediaProfile;
-(NSString *)loggedInAppleMusicAccountDSID;
-(void)setIsCustomVolumeSelected:(BOOL)arg1 ;
-(void)setIsPlayMediaSelected:(BOOL)arg1 ;
-(void)setOriginalSelectedMediaProfile:(HMMediaProfile *)arg1 ;
-(void)setSelectedMediaProfile:(HMMediaProfile *)arg1 ;
-(void)setEditedAlarm:(MTMutableAlarm *)arg1 ;
-(void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2 ;
-(id)initWithAlarmItem:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)_setupCell:(id)arg1 forTableView:(id)arg2 indexPath:(id)arg3 ;
-(void)_updateCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)_chooseMediaTapped;
-(void)_updateEnableStateForDoneButton:(BOOL)arg1 ;
-(void)_updateAppleMusicSubscriptionStatus;
-(void)_checkAndPrepareEditingAlarmForMediaTypeAlarm;
-(id)_configureSoundForMediaTypeAlarm:(id)arg1 ;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg1 ;
-(void)setLoggedInAppleMusicAccountDSID:(NSString *)arg1 ;
-(NSSet *)selectedActionSets;
-(HUAlarmEditView *)editAlarmView;
-(void)setEditAlarmView:(HUAlarmEditView *)arg1 ;
-(long long)editingAlarmSetting;
-(void)setEditingAlarmSetting:(long long)arg1 ;
-(double)selectedCustomVolumeLevel;
-(void)setHfPlaybackArchive:(HFPlaybackArchive *)arg1 ;
-(void)setMediaProfileContainer:(id<HFMediaProfileContainer>)arg1 ;
-(NSMutableDictionary *)appleMusicSubcriptionResult;
-(void)setAppleMusicSubcriptionResult:(NSMutableDictionary *)arg1 ;
-(void)setIsDatePickerWheelScrolled:(BOOL)arg1 ;
-(NSDateComponents *)currentDatePickerTimeComponents;
@end
