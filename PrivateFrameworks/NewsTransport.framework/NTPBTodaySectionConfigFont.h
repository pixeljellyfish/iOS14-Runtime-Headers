/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface NTPBTodaySectionConfigFont : PBCodable <NSCopying> {

	NSString* _name;
	NSString* _urlString;

}

@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
-(NSURL *)URL;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasName;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(BOOL)hasUrlString;
-(id)dictionaryRepresentation;
@end

