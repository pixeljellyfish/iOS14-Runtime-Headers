/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _clientConfigs;
	GEOPDABClientDatasetMetadata* _clientDatasetMetadata;
	NSMutableArray* _serverAbAssignments;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientConfigs : 1;
		unsigned read_clientDatasetMetadata : 1;
		unsigned read_serverAbAssignments : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * serverAbAssignments; 
@property (nonatomic,retain) NSMutableArray * clientConfigs; 
@property (nonatomic,readonly) BOOL hasClientDatasetMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * clientDatasetMetadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)serverAbAssignmentType;
+(Class)clientConfigType;
+(BOOL)isValid:(id)arg1 ;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServerAbAssignments:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)serverAbAssignmentAtIndex:(unsigned long long)arg1 ;
-(id)jsonRepresentation;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(void)addServerAbAssignment:(id)arg1 ;
-(unsigned long long)serverAbAssignmentsCount;
-(void)clearClientConfigs;
-(NSMutableArray *)serverAbAssignments;
-(id)init;
-(void)setClientDatasetMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearServerAbAssignments;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasClientDatasetMetadata;
-(unsigned long long)clientConfigsCount;
-(void)addClientConfig:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(GEOPDABClientDatasetMetadata *)clientDatasetMetadata;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(NSMutableArray *)clientConfigs;
-(id)dictionaryRepresentation;
@end
