/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNData.h>

@interface VCPCNNDataGPU : VCPCNNData
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)bufferAllocGPU;
-(int)allocBuffers:(BOOL)arg1 ;
-(int)reallocGPUTemporalBuffers;
@end

