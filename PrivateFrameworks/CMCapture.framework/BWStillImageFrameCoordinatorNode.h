/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary, NSMutableDictionary, BWStillImageCaptureSettings, NSMutableArray;

@interface BWStillImageFrameCoordinatorNode : BWNode {

	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	NSMutableDictionary* _portTypeToFrameCounters;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BOOL _holdMessagesUntilAllInputsAreLive;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _inputsForQueuedMessages;

}
+(void)initialize;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(void)_deliverQueuedMessages;
-(id)initWithPortTypes:(id)arg1 ;
-(void)dealloc;
-(id)inputForPortType:(id)arg1 ;
-(int)_setupStillImageCaptureStateWithResolvedStillImageCaptureSettings:(id)arg1 ;
-(void)_handleZeroShutterLagSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)_isCaptureComplete;
-(void)_resetStillImageCaptureState;
-(id)outputForPortType:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
@end

