/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _length;
	unsigned _startIndex;
	struct {
		unsigned has_length : 1;
		unsigned has_startIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(BOOL)hasStartIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned)length;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)startIndex;
-(BOOL)hasLength;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

