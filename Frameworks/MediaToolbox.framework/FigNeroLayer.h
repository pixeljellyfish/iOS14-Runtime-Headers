/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol OS_dispatch_queue, FigNeroLayerDelegate;
@class NSObject;

@interface FigNeroLayer : CALayer {

	NSObject*<OS_dispatch_queue> _neroQueue;
	OpaqueFigNeroidRef _neroid;
	id<FigNeroLayerDelegate> _neroDelegate;

}

@property (assign,nonatomic) id<FigNeroLayerDelegate> neroDelegate; 
-(void)setBounds:(CGRect)arg1 ;
-(void)_start;
-(void)dealloc;
-(id<FigNeroLayerDelegate>)neroDelegate;
-(void)setNeroDelegate:(id<FigNeroLayerDelegate>)arg1 ;
-(void)_dispatchNotification:(id)arg1 value:(id)arg2 ;
-(void)start;
-(id)init;
-(void)stop;
@end
