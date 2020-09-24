/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>

@class UIGestureRecognizer, NSTimer, ISLiveWallpaperPlayer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView {

	BOOL _touching;
	UIGestureRecognizer* _playbackGestureRecognizer;
	double _force;
	NSTimer* _updateTimer;

}

@property (assign,nonatomic) BOOL touching;                                                  //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                   //@synthesize force=_force - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                          //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) ISLiveWallpaperPlayer * player; 
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer;              //@synthesize playbackGestureRecognizer=_playbackGestureRecognizer - In the implementation block
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(NSTimer *)updateTimer;
-(id)initWithCoder:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)setTouching:(BOOL)arg1 ;
-(void)_updatePlayer;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handleUpdateTimer;
-(BOOL)touching;
@end
