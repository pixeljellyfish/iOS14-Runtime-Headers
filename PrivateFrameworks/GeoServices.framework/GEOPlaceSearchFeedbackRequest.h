/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	struct {
		unsigned has_sessionGUID : 1;
		unsigned has_businessID : 1;
		unsigned has_timestamp : 1;
		unsigned has_feedbackType : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_numberOfResults : 1;
		unsigned has_positionInResults : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) GEOSessionID sessionGUID; 
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) long long businessID; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType; 
@property (assign,nonatomic) BOOL hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults; 
@property (assign,nonatomic) BOOL hasPositionInResults; 
@property (assign,nonatomic) int positionInResults; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(BOOL)isValid:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)sequenceNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(double)timestamp;
-(id)jsonRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionGUID:(GEOSessionID)arg1 ;
-(void)setNumberOfResults:(int)arg1 ;
-(void)setPositionInResults:(int)arg1 ;
-(GEOSessionID)sessionGUID;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(BOOL)hasSessionGUID;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(int)numberOfResults;
-(void)setHasNumberOfResults:(BOOL)arg1 ;
-(BOOL)hasNumberOfResults;
-(int)positionInResults;
-(void)setHasPositionInResults:(BOOL)arg1 ;
-(BOOL)hasPositionInResults;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(long long)businessID;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(BOOL)hasBusinessID;
-(int)localSearchProviderID;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(void)setBusinessID:(long long)arg1 ;
-(int)feedbackType;
-(id)description;
-(id)dictionaryRepresentation;
@end

