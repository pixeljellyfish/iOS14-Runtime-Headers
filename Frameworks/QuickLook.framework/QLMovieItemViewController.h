/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLMediaItemViewController.h>
#import <libobjc.A.dylib/AVPictureInPictureControllerDelegate.h>
#import <libobjc.A.dylib/AVEditBehaviorDelegate.h>

@class PHPlaceholderView, AVPlayerViewController, QLOverlayPlayButton, QLVideoScrubberView, NSLayoutConstraint, UIView, UIScrollView, AVEditBehavior, QLMovieEdits, NSString;

@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate, AVEditBehaviorDelegate> {

	BOOL _previewIsVisisble;
	BOOL _isObservingPlayerExternalPlaybackActive;
	PHPlaceholderView* _airPlayPlaceholderView;
	BOOL _isEditing;
	BOOL _isSavingEditsBeforeDismissing;
	BOOL _assetCanBeRotated;
	AVPlayerViewController* _playerViewController;
	QLOverlayPlayButton* _playButton;
	QLVideoScrubberView* _scrubber;
	NSLayoutConstraint* _bottomScrubberConstraint;
	UIView* _scrubberContainer;
	UIScrollView* _scrubberContainerScrollView;
	double _scrubberVerticalOffset;
	UIView* _playerViewContainer;
	UIScrollView* _playerViewControllerScrollView;
	AVEditBehavior* _editBehavior;
	QLMovieEdits* _edits;
	QLMovieEdits* _editsSinceLastSave;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;                     //@synthesize playerViewController=_playerViewController - In the implementation block
@property (retain) QLOverlayPlayButton * playButton;                                            //@synthesize playButton=_playButton - In the implementation block
@property (retain) QLVideoScrubberView * scrubber;                                              //@synthesize scrubber=_scrubber - In the implementation block
@property (retain) NSLayoutConstraint * bottomScrubberConstraint;                               //@synthesize bottomScrubberConstraint=_bottomScrubberConstraint - In the implementation block
@property (retain) UIView * scrubberContainer;                                                  //@synthesize scrubberContainer=_scrubberContainer - In the implementation block
@property (retain) UIScrollView * scrubberContainerScrollView;                                  //@synthesize scrubberContainerScrollView=_scrubberContainerScrollView - In the implementation block
@property (assign,nonatomic) double scrubberVerticalOffset;                                     //@synthesize scrubberVerticalOffset=_scrubberVerticalOffset - In the implementation block
@property (nonatomic,readonly) PHPlaceholderView * airPlayPlaceholderView; 
@property (nonatomic,retain) UIView * playerViewContainer;                                      //@synthesize playerViewContainer=_playerViewContainer - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * playerViewControllerScrollView;              //@synthesize playerViewControllerScrollView=_playerViewControllerScrollView - In the implementation block
@property (nonatomic,retain) AVEditBehavior * editBehavior;                                     //@synthesize editBehavior=_editBehavior - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                                    //@synthesize isEditing=_isEditing - In the implementation block
@property (nonatomic,retain) QLMovieEdits * edits;                                              //@synthesize edits=_edits - In the implementation block
@property (nonatomic,retain) QLMovieEdits * editsSinceLastSave;                                 //@synthesize editsSinceLastSave=_editsSinceLastSave - In the implementation block
@property (assign,nonatomic) BOOL isSavingEditsBeforeDismissing;                                //@synthesize isSavingEditsBeforeDismissing=_isSavingEditsBeforeDismissing - In the implementation block
@property (assign,nonatomic) BOOL assetCanBeRotated;                                            //@synthesize assetCanBeRotated=_assetCanBeRotated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)play;
-(void)_saveMovieIfEditedWithEditedCopy:(id)arg1 shouldDismissAfterSaving:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(PHPlaceholderView *)airPlayPlaceholderView;
-(BOOL)shouldHandleRegisteringForCommandCenterHandlers;
-(NSLayoutConstraint *)bottomScrubberConstraint;
-(void)setBottomScrubberConstraint:(NSLayoutConstraint *)arg1 ;
-(UIScrollView *)scrubberContainerScrollView;
-(void)setScrubberContainerScrollView:(UIScrollView *)arg1 ;
-(UIView *)playerViewContainer;
-(void)setPlayerViewContainer:(UIView *)arg1 ;
-(UIScrollView *)playerViewControllerScrollView;
-(void)setPlayerViewControllerScrollView:(UIScrollView *)arg1 ;
-(AVEditBehavior *)editBehavior;
-(void)setEditBehavior:(AVEditBehavior *)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(QLMovieEdits *)editsSinceLastSave;
-(void)setEditsSinceLastSave:(QLMovieEdits *)arg1 ;
-(BOOL)isSavingEditsBeforeDismissing;
-(void)setIsSavingEditsBeforeDismissing:(BOOL)arg1 ;
-(BOOL)assetCanBeRotated;
-(void)setAssetCanBeRotated:(BOOL)arg1 ;
-(id)accessoryView;
-(QLMovieEdits *)edits;
-(BOOL)isEditing;
-(QLVideoScrubberView *)scrubber;
-(void)dealloc;
-(id)toolbarButtonsForTraitCollection:(id)arg1 ;
-(void)handlePerformedKeyCommandIfNeeded:(id)arg1 ;
-(id)parallaxView;
-(void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)savePreviewEditedCopyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didChangePlayingStatus;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)timeLabelScrollView;
-(UIView *)scrubberContainer;
-(void)setScrubberContainer:(UIView *)arg1 ;
-(double)scrubberVerticalOffset;
-(void)setScrubberVerticalOffset:(double)arg1 ;
-(id)transitioningView;
-(id)editProgressIndicatorMessage;
-(void)updateInterfaceForSavingEdits;
-(id)init;
-(void)updateInterfaceAfterSavingEdits;
-(BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(void)performFirstTimeAppearanceActions:(unsigned long long)arg1 ;
-(QLOverlayPlayButton *)playButton;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canSwipeToDismiss;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)setEdits:(QLMovieEdits *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)editButtonTapped;
-(void)setPlayButton:(QLOverlayPlayButton *)arg1 ;
-(void)editBehaviorDidCancel:(id)arg1 ;
-(id)editBehaviorAlertActionsForDoneButtonTap:(id)arg1 ;
-(id)setupPlayerViewWithPlayer:(id)arg1 ;
-(BOOL)shouldDisplayPlayButtonInNavigationBar;
-(id)registeredKeyCommands;
-(BOOL)canToggleFullScreen;
-(void)_setupEditBehavior;
-(void)_setupScrubberPlaceholderThumbnail;
-(id)_metadataItemTitle;
-(void)_updatePlaceHolderView;
-(void)addScrubberIfNeededWithDeferral;
-(id)scrollViewInView:(id)arg1 ;
-(BOOL)_videoIsPlaying;
-(void)_updatePlayButtonVisibility;
-(BOOL)_enterEditModeIfPossible;
-(void)_enterEditMode;
-(BOOL)shouldAllowEditingContents;
-(void)_updateEditMode;
-(void)_resetTrimmingValues;
-(id)scrollView;
-(void)setScrubber:(QLVideoScrubberView *)arg1 ;
-(void)_updateEditsTrimmingValuesWithTrimStartTime:(double)arg1 trimEndTime:(double)arg2 ;
-(void)_showFailedToSaveChangesAlertWithError:(id)arg1 ;
-(void)_saveMovieIfEdited:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updateInterfaceAfterExitingEditMode;
-(void)_rotateIfPossible;
-(void)_rotateMovieRight;
-(void)_exitEditMode:(BOOL)arg1 ;
-(void)_rotateRightButtonTapped;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
@end
