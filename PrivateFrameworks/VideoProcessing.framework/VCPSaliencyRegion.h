/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSaliencyRegion : NSObject {

	float _confidence;
	CGRect _bound;

}

@property (assign) CGRect bound;                  //@synthesize bound=_bound - In the implementation block
@property (assign) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(void)attachSalientRegions:(id)arg1 toPixelBuffer:(CVBufferRef)arg2 ;
+(id)salientRegionsFromPixelBuffer:(CVBufferRef)arg1 ;
-(CGRect)bound;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(float)confidence;
-(void)setBound:(CGRect)arg1 ;
-(id)initWith:(CGRect)arg1 confidence:(float)arg2 ;
-(id)plistRepresentation;
-(void)setConfidence:(float)arg1 ;
@end

