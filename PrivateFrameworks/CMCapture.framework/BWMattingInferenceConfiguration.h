/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;
@interface BWMattingInferenceConfiguration : BWInferenceConfiguration {

	float _mainImageDownscalingFactor;
	BOOL _refinedDepthDeliveryEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (assign,nonatomic) float mainImageDownscalingFactor;                   //@synthesize mainImageDownscalingFactor=_mainImageDownscalingFactor - In the implementation block
@property (assign,nonatomic) BOOL refinedDepthDeliveryEnabled;                   //@synthesize refinedDepthDeliveryEnabled=_refinedDepthDeliveryEnabled - In the implementation block
@property (assign,nonatomic) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setRefinedDepthDeliveryEnabled:(BOOL)arg1 ;
-(void)setMainImageDownscalingFactor:(float)arg1 ;
-(float)mainImageDownscalingFactor;
-(BOOL)refinedDepthDeliveryEnabled;
@end
