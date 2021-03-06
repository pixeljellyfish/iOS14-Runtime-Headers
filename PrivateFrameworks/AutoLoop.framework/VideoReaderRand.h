/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoReader.h>

@interface VideoReaderRand : VideoReader {

	vector<CMTime, std::__1::allocator<CMTime> >* _frameTimes;
	int _lastFrameDex;
	int _numFrames;

}
-(int)reset;
-(int)indexForTime:(SCD_Struct_Au1)arg1 ;
-(id)initFromFile:(id)arg1 withParams:(id)arg2 ;
-(id)initFromFile:(id)arg1 frameTimes:(const vector<CMTime, std::__1::allocator<CMTime> >*)arg2 ;
-(int)getFrameAtTime:(SCD_Struct_Au1)arg1 frame:(opaqueCMSampleBuffer*)arg2 rawFrameIndex:(unsigned*)arg3 ;
@end

