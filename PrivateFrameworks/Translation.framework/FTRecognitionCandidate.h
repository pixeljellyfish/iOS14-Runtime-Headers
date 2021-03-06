/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTRecognitionResult, FTAudioAnalytics, FTLatnnMitigatorResult;

@interface FTRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecognitionCandidate* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) NSString * result_id; 
@property (nonatomic,readonly) double snr; 
@property (nonatomic,readonly) long long fingerprint_detection; 
@property (nonatomic,readonly) FTAudioAnalytics * audio_analytics; 
@property (nonatomic,readonly) long long watermark_detection; 
@property (nonatomic,readonly) double watermark_peak_average; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) FTLatnnMitigatorResult * latnn_mitigator_result; 
@property (nonatomic,readonly) NSString * request_locale; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(double)snr;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionCandidate*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::RecognitionCandidate>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecognitionCandidate*)arg2 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)request_locale;
-(FTRecognitionResult *)recognition_result;
-(FTAudioAnalytics *)audio_analytics;
-(long long)watermark_detection;
-(double)watermark_peak_average;
-(FTLatnnMitigatorResult *)latnn_mitigator_result;
-(NSString *)speech_id;
-(NSString *)session_id;
-(NSString *)result_id;
-(long long)fingerprint_detection;
@end

