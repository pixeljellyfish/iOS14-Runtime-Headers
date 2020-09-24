/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsVisibleFunctionTable.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugComputePipelineState;

@interface MTLDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLDebugResourcePurgeable> {

	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	unsigned long long _functionCount;
	MTLDebugComputePipelineState* _pipelineState;

}

@property (readonly) unsigned long long functionCount;              //@synthesize functionCount=_functionCount - In the implementation block
-(void)dealloc;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)setFunctions:(const id*)arg1 withRange:(NSRange)arg2 ;
-(unsigned long long)functionCount;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(id)initWithVisibleFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(id)initWithVisibleFunctionTable:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 pipelineState:(id)arg4 ;
@end
