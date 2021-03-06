/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _nextStopMuids;

}

@property (nonatomic,readonly) unsigned long long nextStopMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)addNextStopMuid:(unsigned long long)arg1 ;
-(unsigned long long)nextStopMuidsCount;
-(void)clearNextStopMuids;
-(unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)nextStopMuids;
-(void)setNextStopMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

