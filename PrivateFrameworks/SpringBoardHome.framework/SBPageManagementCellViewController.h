/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBIconViewCustomImageViewControlling.h>

@protocol SBPageManagementCellViewControllerDelegate;
@class SBIconListView, MTMaterialView, SBFolder, UIGestureRecognizer, UIView, NSString, SBIcon, _UILegibilitySettings, NSArray;

@interface SBPageManagementCellViewController : UIViewController <UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling> {

	SBPageManagementCellMetrics _metrics;
	BOOL _showsSquareCorners;
	BOOL _editing;
	SBIconListView* _listView;
	MTMaterialView* _listBackgroundView;
	MTMaterialView* _toggleButtonBackgroundView;
	SBFolder* _folder;
	id<SBPageManagementCellViewControllerDelegate> _delegate;
	UIGestureRecognizer* _tapGestureRecognizer;
	SBIconImageInfo _iconImageInfo;

}

@property (nonatomic,readonly) UIGestureRecognizer * tapGestureRecognizer;                                //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) SBIconListView * listView;                                                 //@synthesize listView=_listView - In the implementation block
@property (nonatomic,readonly) MTMaterialView * listBackgroundView;                                       //@synthesize listBackgroundView=_listBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * listDimmingView; 
@property (nonatomic,readonly) MTMaterialView * toggleButtonBackgroundView;                               //@synthesize toggleButtonBackgroundView=_toggleButtonBackgroundView - In the implementation block
@property (nonatomic,readonly) SBFolder * folder;                                                         //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic,__weak) id<SBPageManagementCellViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL scalesListView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SBIconImageInfo iconImageInfo;                                               //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                               //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) SBIcon * icon; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> visiblyActiveDataSource; 
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu; 
@property (assign,getter=isOverlapping,nonatomic) BOOL overlapping; 
@property (assign,getter=isDropping,nonatomic) BOOL dropping; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isBackgroundBlurEnabled,nonatomic) BOOL backgroundBlurEnabled; 
@property (nonatomic,readonly) BOOL wantsCaptureOnlyBackgroundView; 
@property (nonatomic,copy) id backgroundViewProvider; 
@property (assign,nonatomic) double brightness; 
@property (nonatomic,readonly) BOOL wantsLabelHidden; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled; 
@property (assign,nonatomic) BOOL automaticallyUpdatesVisiblySettled; 
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled; 
@property (assign,nonatomic) unsigned long long presentationMode; 
@property (assign,nonatomic) unsigned long long imageViewAlignment; 
@property (assign,nonatomic) unsigned long long pauseReasons; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,readonly) UIView * snapshotView; 
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL showsSquareCorners;                                                     //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
-(SBFolder *)folder;
-(CGRect)visibleBounds;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(BOOL)showsSquareCorners;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(SBIconListView *)listView;
-(SBIconImageInfo)iconImageInfo;
-(double)continuousCornerRadius;
-(BOOL)isEditing;
-(id)sourceView;
-(void)loadView;
-(void)setDelegate:(id<SBPageManagementCellViewControllerDelegate>)arg1 ;
-(UIGestureRecognizer *)tapGestureRecognizer;
-(id<SBPageManagementCellViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setScalesListView:(BOOL)arg1 ;
-(MTMaterialView *)listBackgroundView;
-(UIView *)listDimmingView;
-(id)initWithListView:(id)arg1 listBackgroundView:(id)arg2 toggleButtonBackgroundView:(id)arg3 folder:(id)arg4 metrics:(SBPageManagementCellMetrics)arg5 ;
-(void)cleanUpListView;
-(void)cancelGestures;
-(BOOL)scalesListView;
-(id)listHighlightView;
-(void)setListHighlighted:(BOOL)arg1 ;
-(MTMaterialView *)toggleButtonBackgroundView;
-(void)listViewTapped:(id)arg1 ;
-(id)pageManagementView;
@end
