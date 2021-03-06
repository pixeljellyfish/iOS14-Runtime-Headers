/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNImageBufferProviding.h>

@class VNSession, VNRequestPerformer, VNImageBuffer, NSMapTable, VNObservationsCache, VNRequestForensics;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {

	VNSession* _session;
	unsigned _qosClass;
	VNRequestPerformer* _requestPerformer_DO_NOT_DIRECTLY_ACCESS;
	VNImageBuffer* _imageBuffer_DO_NOT_DIRECTLY_ACCESS;
	NSMapTable* _requestToObservationsCacheKeyMap;
	VNObservationsCache* _observationsCache;
	VNRequestForensics* _requestForensics;

}

@property (readonly) VNSession * session; 
-(BOOL)cacheObservationsForRequest:(id)arg1 ;
-(id)requestPerformerAndReturnError:(id*)arg1 ;
-(VNSession *)session;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
-(void)setModelRequestHandler:(id)arg1 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(BOOL)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 error:(id*)arg3 ;
-(unsigned)qosClass;
-(id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 ;
-(id)modelRequestHandlerAndReturnError:(id*)arg1 ;
-(id)cachedObservationsForRequest:(id)arg1 ;
-(id)_observationsCacheKeyForRequest:(id)arg1 ;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(id)requestForensics;
-(id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned)arg6 ;
@end

