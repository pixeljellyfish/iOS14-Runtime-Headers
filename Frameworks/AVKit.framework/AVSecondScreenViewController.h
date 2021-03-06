/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, AVPlayerLayer, UILabel, AVSecondScreenPlayerLayerView;

@interface AVSecondScreenViewController : UIViewController {

	BOOL _playingOnSecondScreen;
	UIView* _contentView;
	AVPlayerLayer* _sourcePlayerLayer;
	UILabel* _debugLabel;
	AVSecondScreenPlayerLayerView* _playerLayerView;
	CGRect _initialScreenBoundsHint;

}

@property (nonatomic,readonly) UILabel * debugLabel;                                                 //@synthesize debugLabel=_debugLabel - In the implementation block
@property (nonatomic,retain) AVSecondScreenPlayerLayerView * playerLayerView;                        //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;              //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (assign,nonatomic) CGRect initialScreenBoundsHint;                                         //@synthesize initialScreenBoundsHint=_initialScreenBoundsHint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerLayer * sourcePlayerLayer;                               //@synthesize sourcePlayerLayer=_sourcePlayerLayer - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
-(UIView *)contentView;
-(id)debugText;
-(void)setDebugText:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(void)setPlayerLayerView:(AVSecondScreenPlayerLayerView *)arg1 ;
-(void)dealloc;
-(CGSize)videoDisplaySize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)debugLabel;
-(void)viewDidLoad;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)loadPlayerLayerViewIfNeeded;
-(void)setSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setInitialScreenBoundsHint:(CGRect)arg1 ;
-(void)_updateContentViewIfNeeded;
-(CGRect)initialScreenBoundsHint;
-(AVPlayerLayer *)sourcePlayerLayer;
-(void)_updateLayout;
-(AVSecondScreenPlayerLayerView *)playerLayerView;
@end

