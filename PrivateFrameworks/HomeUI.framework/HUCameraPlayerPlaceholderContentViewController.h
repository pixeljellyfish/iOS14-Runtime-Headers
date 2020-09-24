/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HFCameraPlaybackEngineObserver.h>

@class HFCameraPlaybackEngine, UIImageView, HMCameraClip, NSString;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController <HFCameraPlaybackEngineObserver> {

	BOOL _cameraPlayerHasContentToShow;
	HFCameraPlaybackEngine* _playbackEngine;
	UIImageView* _placeholderImageView;
	HMCameraClip* _lastRequestedClip;

}

@property (assign,nonatomic,__weak) HFCameraPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,retain) UIImageView * placeholderImageView;                          //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) HMCameraClip * lastRequestedClip;                            //@synthesize lastRequestedClip=_lastRequestedClip - In the implementation block
@property (assign,nonatomic) BOOL cameraPlayerHasContentToShow;                           //@synthesize cameraPlayerHasContentToShow=_cameraPlayerHasContentToShow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HFCameraPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)updatePlaceholderContent;
-(void)updatePlaceholderImage:(id)arg1 ;
-(void)setPlaybackEngine:(HFCameraPlaybackEngine *)arg1 ;
-(void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2 ;
-(void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2 ;
-(UIImageView *)placeholderImageView;
-(void)viewDidLoad;
-(BOOL)cameraPlayerHasContentToShow;
-(BOOL)_shouldHidePlaceholderContentForCurrentAccessMode;
-(void)setCameraPlayerHasContentToShow:(BOOL)arg1 ;
-(void)hu_reloadData;
-(HMCameraClip *)lastRequestedClip;
-(void)setLastRequestedClip:(HMCameraClip *)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
@end
