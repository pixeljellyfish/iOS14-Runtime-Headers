/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBaseTemplateViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CPUINowPlayingObserving.h>
#import <libobjc.A.dylib/CPListTemplateProviding.h>

@class CPSSectionedDataSource, NSUUID, NSTimer, CPSTableView, CPUINowPlayingManager, CPSEmptyView, CPListTemplate, NSString;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding> {

	CPSSectionedDataSource* _dataSource;
	NSUUID* _currentSpinningIdentifier;
	NSUUID* _nextSpinningIdentifier;
	unsigned long long _spinnerState;
	NSTimer* _spinnerStartTimer;
	NSTimer* _spinnerTimeoutTimer;
	CPSTableView* _tableView;
	CPUINowPlayingManager* _nowPlayingManager;
	CPSEmptyView* _emptyView;
	NSUUID* _lastFocusedItem;

}

@property (nonatomic,retain) CPSSectionedDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSUUID * currentSpinningIdentifier;                       //@synthesize currentSpinningIdentifier=_currentSpinningIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * nextSpinningIdentifier;                          //@synthesize nextSpinningIdentifier=_nextSpinningIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long spinnerState;                        //@synthesize spinnerState=_spinnerState - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerStartTimer;                            //@synthesize spinnerStartTimer=_spinnerStartTimer - In the implementation block
@property (nonatomic,retain) NSTimer * spinnerTimeoutTimer;                          //@synthesize spinnerTimeoutTimer=_spinnerTimeoutTimer - In the implementation block
@property (nonatomic,readonly) CPListTemplate * listTemplate; 
@property (nonatomic,retain) CPSTableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) CPUINowPlayingManager * nowPlayingManager;              //@synthesize nowPlayingManager=_nowPlayingManager - In the implementation block
@property (nonatomic,retain) CPSEmptyView * emptyView;                               //@synthesize emptyView=_emptyView - In the implementation block
@property (nonatomic,retain) NSUUID * lastFocusedItem;                               //@synthesize lastFocusedItem=_lastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)preferredFocusEnvironments;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setDataSource:(CPSSectionedDataSource *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(CPSTableView *)tableView;
-(void)setTableView:(CPSTableView *)arg1 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_scrollViewAccessoryInsetsDidChange:(id)arg1 ;
-(CPSSectionedDataSource *)dataSource;
-(void)updateSections:(id)arg1 ;
-(BOOL)restoresFocusAfterTransition;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setButton:(id)arg1 enabled:(BOOL)arg2 ;
-(void)reloadItems:(id)arg1 ;
-(CPListTemplate *)listTemplate;
-(void)_viewDidLoad;
-(void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2 ;
-(id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 ;
-(BOOL)_wantsNowPlayingButton;
-(CPUINowPlayingManager *)nowPlayingManager;
-(void)setNowPlayingManager:(CPUINowPlayingManager *)arg1 ;
-(NSUUID *)currentSpinningIdentifier;
-(long long)_playingIndicatorStateForSnapshot:(id)arg1 ;
-(void)_updateEmptyView;
-(BOOL)_shouldRetainFocusOnWillAppear;
-(CPSEmptyView *)emptyView;
-(void)setEmptyView:(CPSEmptyView *)arg1 ;
-(NSUUID *)nextSpinningIdentifier;
-(void)setCurrentSpinningIdentifier:(NSUUID *)arg1 ;
-(void)setNextSpinningIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)spinnerState;
-(void)_startSpinnerTimerFired:(id)arg1 identifier:(id)arg2 ;
-(void)setSpinnerStartTimer:(NSTimer *)arg1 ;
-(void)_timeoutSpinnerFired:(id)arg1 identifier:(id)arg2 ;
-(void)setSpinnerTimeoutTimer:(NSTimer *)arg1 ;
-(void)setSpinnerState:(unsigned long long)arg1 ;
-(void)_addSpinnerToIdentifier:(id)arg1 ;
-(void)_cellSelectionCompleted:(id)arg1 ;
-(NSTimer *)spinnerStartTimer;
-(NSTimer *)spinnerTimeoutTimer;
-(void)_cancelScheduledLoadingSpinner;
-(NSUUID *)lastFocusedItem;
-(void)setLastFocusedItem:(NSUUID *)arg1 ;
-(void)_updateFocusForReload;
-(void)_activateSiriForMessageItem:(id)arg1 ;
-(void)_scheduleLoadingSpinnerForIdentifier:(id)arg1 ;
-(void)setButton:(id)arg1 hidden:(BOOL)arg2 ;
@end

