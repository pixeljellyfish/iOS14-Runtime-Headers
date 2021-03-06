/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class AVAudioFormat, AVAudioConverter, AVAudioCompressedBuffer;

@interface VSOpusEncoder : NSObject {

	/*^block*/id _opusDataHandler;
	/*^block*/id _errorHandler;
	AVAudioFormat* _fromFormat;
	AVAudioFormat* _toFormat;
	AVAudioConverter* _converter;
	AVAudioCompressedBuffer* _outputBuffer;
	long long _opusDataOffset;

}

@property (nonatomic,copy) id opusDataHandler;                                    //@synthesize opusDataHandler=_opusDataHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                       //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) AVAudioFormat * fromFormat;                          //@synthesize fromFormat=_fromFormat - In the implementation block
@property (nonatomic,retain) AVAudioFormat * toFormat;                            //@synthesize toFormat=_toFormat - In the implementation block
@property (nonatomic,retain) AVAudioConverter * converter;                        //@synthesize converter=_converter - In the implementation block
@property (nonatomic,retain) AVAudioCompressedBuffer * outputBuffer;              //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (assign,nonatomic) long long opusDataOffset;                            //@synthesize opusDataOffset=_opusDataOffset - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(AVAudioCompressedBuffer *)outputBuffer;
-(void)setOutputBuffer:(AVAudioCompressedBuffer *)arg1 ;
-(void)encodeChunk:(id)arg1 ;
-(id)initWithSourceASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setOpusDataHandler:(id)arg1 ;
-(AVAudioFormat *)fromFormat;
-(void)beginEncoding;
-(id)opusDataHandler;
-(void)setFromFormat:(AVAudioFormat *)arg1 ;
-(void)setToFormat:(AVAudioFormat *)arg1 ;
-(long long)opusDataOffset;
-(void)setOpusDataOffset:(long long)arg1 ;
-(AVAudioFormat *)toFormat;
-(void)setConverter:(AVAudioConverter *)arg1 ;
-(void)endEncoding;
-(id)errorHandler;
-(AVAudioConverter *)converter;
@end

