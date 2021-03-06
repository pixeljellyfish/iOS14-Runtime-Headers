/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWCrossoverNode : BWNode {

	int _numEODMessagesReceived;
	os_unfair_lock_s _bufferServicingLock;

}
+(void)initialize;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithMediaType:(unsigned)arg1 numberOfInputs:(unsigned)arg2 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
@end

