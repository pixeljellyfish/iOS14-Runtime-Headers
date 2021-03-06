/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PPPBContactNameRecord : PBCodable <NSCopying> {

	double _score;
	unsigned char _changeType;
	NSMutableArray* _cityNames;
	NSString* _firstName;
	NSString* _identifier;
	NSString* _jobTitle;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _phoneticFirstName;
	NSString* _phoneticLastName;
	NSString* _phoneticMiddleName;
	NSMutableArray* _relatedNames;
	unsigned char _source;
	NSString* _sourceIdentifier;
	NSMutableArray* _streetNames;
	SCD_Struct_PP4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                               //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned char source;                       //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasChangeType; 
@property (assign,nonatomic) unsigned char changeType;                   //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticFirstName; 
@property (nonatomic,retain) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,readonly) BOOL hasMiddleName; 
@property (nonatomic,retain) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticMiddleName; 
@property (nonatomic,retain) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLastName; 
@property (nonatomic,retain) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) BOOL hasJobTitle; 
@property (nonatomic,retain) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedNames;              //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * streetNames;               //@synthesize streetNames=_streetNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * cityNames;                 //@synthesize cityNames=_cityNames - In the implementation block
+(Class)relatedNamesType;
+(Class)streetNamesType;
+(Class)cityNamesType;
-(unsigned char)StringAsSource:(id)arg1 ;
-(NSString *)identifier;
-(id)changeTypeAsString:(unsigned char)arg1 ;
-(id)sourceAsString:(unsigned char)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSMutableArray *)relatedNames;
-(NSString *)phoneticMiddleName;
-(unsigned char)StringAsChangeType:(id)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(NSString *)phoneticLastName;
-(NSMutableArray *)streetNames;
-(NSMutableArray *)cityNames;
-(NSString *)lastName;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setHasChangeType:(BOOL)arg1 ;
-(BOOL)hasChangeType;
-(NSString *)firstName;
-(void)addCityNames:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(BOOL)hasSourceIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSource;
-(BOOL)hasOrganizationName;
-(BOOL)hasLastName;
-(void)setChangeType:(unsigned char)arg1 ;
-(void)clearCityNames;
-(NSString *)sourceIdentifier;
-(NSString *)organizationName;
-(NSString *)phoneticFirstName;
-(BOOL)hasIdentifier;
-(NSString *)jobTitle;
-(double)score;
-(unsigned long long)streetNamesCount;
-(void)setScore:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)nickname;
-(BOOL)hasMiddleName;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setSource:(unsigned char)arg1 ;
-(id)streetNamesAtIndex:(unsigned long long)arg1 ;
-(unsigned char)changeType;
-(void)clearStreetNames;
-(void)setHasScore:(BOOL)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setStreetNames:(NSMutableArray *)arg1 ;
-(BOOL)hasScore;
-(BOOL)hasPhoneticMiddleName;
-(BOOL)hasNickname;
-(void)mergeFrom:(id)arg1 ;
-(void)setRelatedNames:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(id)cityNamesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFirstName;
-(void)setCityNames:(NSMutableArray *)arg1 ;
-(id)relatedNamesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPhoneticFirstName;
-(void)addStreetNames:(id)arg1 ;
-(unsigned char)source;
-(void)clearRelatedNames;
-(BOOL)hasJobTitle;
-(void)addRelatedNames:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(BOOL)hasPhoneticLastName;
-(unsigned long long)cityNamesCount;
-(id)description;
-(unsigned long long)relatedNamesCount;
-(id)dictionaryRepresentation;
@end

