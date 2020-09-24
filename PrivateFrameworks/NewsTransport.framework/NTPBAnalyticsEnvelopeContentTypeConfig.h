/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying> {

	unsigned long long _groupingTag;
	unsigned long long _seedTime;
	NSString* _contentHeaderName;
	NSString* _contentHeaderValue;
	NSString* _endpointURLString;
	unsigned _samplingCeiling;
	unsigned _samplingFloor;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasEndpointURLString; 
@property (nonatomic,retain) NSString * endpointURLString;                //@synthesize endpointURLString=_endpointURLString - In the implementation block
@property (assign,nonatomic) BOOL hasSeedTime; 
@property (assign,nonatomic) unsigned long long seedTime;                 //@synthesize seedTime=_seedTime - In the implementation block
@property (nonatomic,readonly) BOOL hasContentHeaderName; 
@property (nonatomic,retain) NSString * contentHeaderName;                //@synthesize contentHeaderName=_contentHeaderName - In the implementation block
@property (nonatomic,readonly) BOOL hasContentHeaderValue; 
@property (nonatomic,retain) NSString * contentHeaderValue;               //@synthesize contentHeaderValue=_contentHeaderValue - In the implementation block
@property (assign,nonatomic) BOOL hasSamplingFloor; 
@property (assign,nonatomic) unsigned samplingFloor;                      //@synthesize samplingFloor=_samplingFloor - In the implementation block
@property (assign,nonatomic) BOOL hasSamplingCeiling; 
@property (assign,nonatomic) unsigned samplingCeiling;                    //@synthesize samplingCeiling=_samplingCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasGroupingTag; 
@property (assign,nonatomic) unsigned long long groupingTag;              //@synthesize groupingTag=_groupingTag - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSeedTime:(BOOL)arg1 ;
-(unsigned long long)seedTime;
-(BOOL)hasEndpointURLString;
-(BOOL)hasSeedTime;
-(BOOL)hasContentHeaderName;
-(unsigned)samplingFloor;
-(BOOL)hasContentHeaderValue;
-(void)setHasSamplingFloor:(BOOL)arg1 ;
-(BOOL)hasSamplingFloor;
-(void)setHasSamplingCeiling:(BOOL)arg1 ;
-(BOOL)hasSamplingCeiling;
-(void)setHasGroupingTag:(BOOL)arg1 ;
-(BOOL)hasGroupingTag;
-(NSString *)endpointURLString;
-(NSString *)contentHeaderName;
-(NSString *)contentHeaderValue;
-(unsigned)samplingCeiling;
-(unsigned long long)groupingTag;
-(void)setEndpointURLString:(NSString *)arg1 ;
-(void)setGroupingTag:(unsigned long long)arg1 ;
-(void)setSeedTime:(unsigned long long)arg1 ;
-(void)setSamplingFloor:(unsigned)arg1 ;
-(void)setContentHeaderName:(NSString *)arg1 ;
-(void)setContentHeaderValue:(NSString *)arg1 ;
-(void)setSamplingCeiling:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
