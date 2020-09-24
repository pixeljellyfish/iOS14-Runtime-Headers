/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/MiroMusicMenuCell.h>

@class MiroSongPreviewButton, MiroCircularProgressBar, UIView, UIImageView, Reachability;

@interface MiroFeaturedMusicMenuCell : MiroMusicMenuCell {

	BOOL _observingSong;
	float _progress;
	MiroSongPreviewButton* _previewSongButton;
	MiroCircularProgressBar* _progressIndicator;
	UIView* _progressBackgroundView;
	UIImageView* _cloudStatus;
	Reachability* _reachability;

}

@property (assign,nonatomic,__weak) MiroCircularProgressBar * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) UIView * progressBackgroundView;                          //@synthesize progressBackgroundView=_progressBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * cloudStatus;                                //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic) BOOL observingSong;                                              //@synthesize observingSong=_observingSong - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                                     //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) float progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) MiroSongPreviewButton * previewSongButton;                //@synthesize previewSongButton=_previewSongButton - In the implementation block
-(MiroCircularProgressBar *)progressIndicator;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)_updateTextColors;
-(void)prepareForReuse;
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(Reachability *)reachability;
-(void)setProgressIndicator:(MiroCircularProgressBar *)arg1 ;
-(void)setSong:(id)arg1 ;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
-(void)awakeFromNib;
-(void)setReachability:(Reachability *)arg1 ;
-(long long)networkStatus;
-(UIImageView *)cloudStatus;
-(void)setCloudStatus:(UIImageView *)arg1 ;
-(void)_setupReachabiliy;
-(MiroSongPreviewButton *)previewSongButton;
-(void)networkStatusChanged:(id)arg1 ;
-(UIView *)progressBackgroundView;
-(void)_updateCloudStatus;
-(void)_updateProgressIndicator:(float)arg1 ;
-(void)updateArtwork;
-(void)updateSongNameForSong:(id)arg1 ;
-(BOOL)observingSong;
-(void)setObservingSong:(BOOL)arg1 ;
-(void)_songAssetChanged:(id)arg1 ;
-(void)_updateDownload:(id)arg1 ;
-(void)setPreviewSongButton:(MiroSongPreviewButton *)arg1 ;
-(void)setProgressBackgroundView:(UIView *)arg1 ;
@end
