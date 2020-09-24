/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionViewFlowLayout, UIView, NSArray, UICollectionView, NSString;

@interface RTTUITextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	long long _leftIndex;
	CGPoint _panContentOffset;
	double _currentKeyboardWidth;
	UICollectionViewFlowLayout* _flowLayout;
	UIView* _leftBackgroundColorEdge;
	UIView* _rightBackgroundColorEdge;
	UIView* _middleBackgroundColorEdge;
	UIView* _inputAccessoryPlaceholderView;
	UIView* _iPadBufferView;
	BOOL _showTTYPredictions;
	BOOL _isHandlingKeyboardFrameChanged;
	NSArray* _ttyAbbreviations;
	UICollectionView* _predictionsCollectionView;

}

@property (nonatomic,retain) UICollectionView * predictionsCollectionView;              //@synthesize predictionsCollectionView=_predictionsCollectionView - In the implementation block
@property (assign,nonatomic) BOOL isHandlingKeyboardFrameChanged;                       //@synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged - In the implementation block
@property (assign,nonatomic) BOOL showTTYPredictions;                                   //@synthesize showTTYPredictions=_showTTYPredictions - In the implementation block
@property (nonatomic,retain) NSArray * ttyAbbreviations;                                //@synthesize ttyAbbreviations=_ttyAbbreviations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)keyboardAppearance;
-(id)inputAccessoryView;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)_accessibilityIsRealtimeElement;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)keyCommands;
-(BOOL)disableInputBars;
-(id)accessibilityIdentifier;
-(unsigned long long)accessibilityTraits;
-(void)updateTTYBar;
-(void)overrideTTYPredictionsHidden:(BOOL)arg1 ;
-(double)ttyBarHeight;
-(void)setShowTTYPredictions:(BOOL)arg1 ;
-(void)_loadTTYAbbreviations;
-(void)_showInlineRTTAbbreviations:(BOOL)arg1 ;
-(void)_setupOverlayPredictions;
-(void)setPredictionsCollectionView:(UICollectionView *)arg1 ;
-(void)setTtyAbbreviations:(NSArray *)arg1 ;
-(void)_kbFrameChanged:(id)arg1 ;
-(float)_predictionsCellHeight;
-(UICollectionView *)predictionsCollectionView;
-(void)setIsHandlingKeyboardFrameChanged:(BOOL)arg1 ;
-(void)_didPanPredictions:(id)arg1 ;
-(float)_predictionsCellBuffer;
-(void)_updateBlackBarPositioning;
-(void)_tapTTYBarCell:(id)arg1 ;
-(NSArray *)ttyAbbreviations;
-(void)_updateTTYBarPosition;
-(int)_predictionsPerPage;
-(BOOL)isHandlingKeyboardFrameChanged;
-(BOOL)_shouldShowTTYPredictions;
-(void)_resetTTYBarPosition;
-(void)_updateTTYBarFrame;
-(void)_inlineTTYAbbreviationSelected:(id)arg1 ;
-(void)_insertWhitespaceIfNeeded;
-(BOOL)_isKeyboardPredictionsEnabled;
-(void)_didSwipeLeft:(id)arg1 ;
-(BOOL)showTTYPredictions;
@end
