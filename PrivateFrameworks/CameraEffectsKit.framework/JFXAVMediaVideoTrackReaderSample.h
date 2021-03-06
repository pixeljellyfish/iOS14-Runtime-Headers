/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaVideoTrackReaderSample.h>

@interface JFXAVMediaVideoTrackReaderSample : NSObject <JFXMediaVideoTrackReaderSample> {

	opaqueCMSampleBufferRef _sampleBufferRef;
	SCD_Struct_JF3 _duration;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBufferRef;              //@synthesize sampleBufferRef=_sampleBufferRef - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 presentationTimeStamp; 
@property (nonatomic,readonly) SCD_Struct_JF4 timeRange; 
-(SCD_Struct_JF4)timeRange;
-(SCD_Struct_JF3)duration;
-(void)dealloc;
-(SCD_Struct_JF3)presentationTimeStamp;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 duration:(SCD_Struct_JF3)arg2 ;
-(opaqueCMSampleBufferRef)sampleBufferRef;
@end

