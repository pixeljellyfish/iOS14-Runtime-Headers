/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class SISchemaLocaleIdentifier, NSData;

@interface SISchemaDictationAlternativesViewed : PBCodable {

	int _countOfWordsUnderlined;
	int _countOfAlternativesAvailable;
	SISchemaLocaleIdentifier* _alternativesLocale;
	SCD_Struct_SI3 _has;
	BOOL _hasAlternativesLocale;

}

@property (assign,nonatomic) int countOfWordsUnderlined;                                 //@synthesize countOfWordsUnderlined=_countOfWordsUnderlined - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfWordsUnderlined; 
@property (assign,nonatomic) int countOfAlternativesAvailable;                           //@synthesize countOfAlternativesAvailable=_countOfAlternativesAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfAlternativesAvailable; 
@property (nonatomic,retain) SISchemaLocaleIdentifier * alternativesLocale;              //@synthesize alternativesLocale=_alternativesLocale - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativesLocale;                                 //@synthesize hasAlternativesLocale=_hasAlternativesLocale - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCountOfWordsUnderlined:(int)arg1 ;
-(void)setAlternativesLocale:(SISchemaLocaleIdentifier *)arg1 ;
-(void)setCountOfAlternativesAvailable:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(SISchemaLocaleIdentifier *)alternativesLocale;
-(int)countOfAlternativesAvailable;
-(BOOL)hasCountOfAlternativesAvailable;
-(void)setHasCountOfAlternativesAvailable:(BOOL)arg1 ;
-(BOOL)hasAlternativesLocale;
-(void)setHasAlternativesLocale:(BOOL)arg1 ;
-(int)countOfWordsUnderlined;
-(BOOL)hasCountOfWordsUnderlined;
-(void)setHasCountOfWordsUnderlined:(BOOL)arg1 ;
@end

