/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoActivityDescriptor : NSObject {

	float descriptors[10];
	int _widthInMb;
	int _heightInMb;
	long long* _motionMagnitudeHistogram;
	float* _motionMagnitude;

}

@property (readonly) float* descriptors; 
-(float*)descriptors;
-(void)dealloc;
-(void)reset;
-(void)spatialDescriptorWithMvMagnitudeMean:(float)arg1 ;
-(id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2 ;
-(void)ExtractActivityDescriptorFromStats:(EncodeStats*)arg1 ;
@end

