/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTServerEndpointFeatures;

@interface FTSpeechTranslationServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationServerEndpointFeatures* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * source_locale; 
@property (nonatomic,readonly) FTServerEndpointFeatures * server_endpoint_features; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source_locale;
-(NSString *)conversation_id;
-(FTServerEndpointFeatures *)server_endpoint_features;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationServerEndpointFeatures*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationServerEndpointFeatures*)arg2 ;
-(NSString *)request_id;
@end
