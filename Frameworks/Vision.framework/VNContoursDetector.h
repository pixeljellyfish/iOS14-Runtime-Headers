/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class CIContext;

@interface VNContoursDetector : VNDetector {

	CIContext* _ciContext;
	CGColorSpaceRef _colorSpace;

}
+(id)configurationOptionKeysForDetectorKey;
-(id)_highContastMonoCIImageFromImageBuffer:(id)arg1 cropRect:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnATBitmap:(const ATBitmap*)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnImage:(id)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(StandAloneBitStringRef)_runAutoTraceOnCVPixelBuffer:(CVBufferRef)arg1 darkOnLight:(BOOL)arg2 inHierarchy:(BOOL)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
@end

