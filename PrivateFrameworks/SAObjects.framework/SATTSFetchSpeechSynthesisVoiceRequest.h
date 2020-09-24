/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * clientVoiceKeyList; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * filteredVoiceKey; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSArray *)clientVoiceKeyList;
-(SATTSSpeechSynthesisVoice *)filteredVoiceKey;
-(void)setClientVoiceKeyList:(NSArray *)arg1 ;
-(void)setFilteredVoiceKey:(SATTSSpeechSynthesisVoice *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
@end
