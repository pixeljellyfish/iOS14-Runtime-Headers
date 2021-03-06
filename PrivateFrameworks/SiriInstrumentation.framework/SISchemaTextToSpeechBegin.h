/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaTextToSpeechBegin : PBCodable {

	NSString* _aceID;
	int _audioOutputRoute;
	SISchemaHardwareInterfaceIdentifier* _hardwareInterfaceVendorID;
	SCD_Struct_SI1 _has;
	BOOL _hasAceID;
	BOOL _hasHardwareInterfaceVendorID;

}

@property (nonatomic,copy) NSString * aceID;                                                               //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) BOOL hasAceID;                                                                //@synthesize hasAceID=_hasAceID - In the implementation block
@property (assign,nonatomic) int audioOutputRoute;                                                         //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOutputRoute; 
@property (nonatomic,retain) SISchemaHardwareInterfaceIdentifier * hardwareInterfaceVendorID;              //@synthesize hardwareInterfaceVendorID=_hardwareInterfaceVendorID - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareInterfaceVendorID;                                            //@synthesize hasHardwareInterfaceVendorID=_hasHardwareInterfaceVendorID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)aceID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasAceID;
-(int)audioOutputRoute;
-(void)setAudioOutputRoute:(int)arg1 ;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(void)setAceID:(NSString *)arg1 ;
-(void)setHardwareInterfaceVendorID:(SISchemaHardwareInterfaceIdentifier *)arg1 ;
-(SISchemaHardwareInterfaceIdentifier *)hardwareInterfaceVendorID;
-(BOOL)hasHardwareInterfaceVendorID;
-(void)setHasHardwareInterfaceVendorID:(BOOL)arg1 ;
-(void)setHasAceID:(BOOL)arg1 ;
-(BOOL)hasAudioOutputRoute;
-(void)setHasAudioOutputRoute:(BOOL)arg1 ;
@end

