/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {

	AVPlayerItemLegibleOutputInternal* _legibleOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemLegibleOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(double)advanceIntervalForDelegateInvocation;
-(void)dealloc;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)setTextStylingResolution:(id)arg1 ;
-(id)init;
-(id)textStylingResolution;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg1 ;
-(id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<AVPlayerItemLegibleOutputPushDelegate>)delegate;
-(void)_collectUncollectables;
-(void)_signalFlush;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(SCD_Struct_AV6)arg3 ;
@end

