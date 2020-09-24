/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView {

	NSString* _customMessage;
	AVPictureInPictureIndicatorLayer* _pipIndicatorLayer;

}

@property (nonatomic,retain) AVPictureInPictureIndicatorLayer * pipIndicatorLayer;              //@synthesize pipIndicatorLayer=_pipIndicatorLayer - In the implementation block
@property (nonatomic,copy) NSString * customMessage;                                            //@synthesize customMessage=_customMessage - In the implementation block
-(void)_updateGeometry;
-(void)setCustomMessage:(NSString *)arg1 ;
-(void)_addIndicatorLayerIfNeeded;
-(AVPictureInPictureIndicatorLayer *)pipIndicatorLayer;
-(void)setPipIndicatorLayer:(AVPictureInPictureIndicatorLayer *)arg1 ;
-(NSString *)customMessage;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setBackgroundColor:(id)arg1 ;
@end
