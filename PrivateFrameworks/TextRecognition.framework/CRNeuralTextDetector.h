/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class CRDetectorConfiguration, CRPerformanceStatistics, NSMutableArray;

@interface CRNeuralTextDetector : NSObject {

	BOOL _shouldCancel;
	CRDetectorConfiguration* _configuration;
	CRPerformanceStatistics* _detectorStats;
	CRPerformanceStatistics* _postProcStats;
	CRPerformanceStatistics* _inferenceStats;
	NSMutableArray* _tileRects;

}

@property (assign) BOOL shouldCancel;                                     //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileRects;                  //@synthesize tileRects=_tileRects - In the implementation block
@property (retain) CRDetectorConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (retain) CRPerformanceStatistics * detectorStats;               //@synthesize detectorStats=_detectorStats - In the implementation block
@property (retain) CRPerformanceStatistics * postProcStats;               //@synthesize postProcStats=_postProcStats - In the implementation block
@property (retain) CRPerformanceStatistics * inferenceStats;              //@synthesize inferenceStats=_inferenceStats - In the implementation block
+(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
+(id)textFeaturesFromPolygons:(vector<CRDetectorUtils::CRTextDetectorQuadFeature, std::__1::allocator<CRDetectorUtils::CRTextDetectorQuadFeature> >*)arg1 withScale:(const float*)arg2 ;
+(id)detectorForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3 ;
-(void)cancel;
-(id)init;
-(void)setShouldCancel:(BOOL)arg1 ;
-(BOOL)shouldCancel;
-(CRDetectorConfiguration *)configuration;
-(void)setConfiguration:(CRDetectorConfiguration *)arg1 ;
-(CRPerformanceStatistics *)detectorStats;
-(CRPerformanceStatistics *)inferenceStats;
-(void)enumerateTilesForImage:(id)arg1 block:(/*^block*/id)arg2 ;
-(CRPerformanceStatistics *)postProcStats;
-(NSMutableArray *)tileRects;
-(id)detectInImage:(id)arg1 error:(id*)arg2 ;
-(void)setInferenceStats:(CRPerformanceStatistics *)arg1 ;
-(void)setDetectorStats:(CRPerformanceStatistics *)arg1 ;
-(void)setPostProcStats:(CRPerformanceStatistics *)arg1 ;
-(void)setTileRects:(NSMutableArray *)arg1 ;
@end
