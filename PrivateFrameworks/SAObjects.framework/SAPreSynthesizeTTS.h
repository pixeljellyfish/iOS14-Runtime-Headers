/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * aceAudioData; 
@property (nonatomic,copy) NSArray * dialogStrings; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSArray * streamIds; 
+(id)preSynthesizeTTS;
+(id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)dialogStrings;
-(void)setDialogStrings:(NSArray *)arg1 ;
-(NSArray *)streamIds;
-(void)setStreamIds:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)aceAudioData;
-(void)setAceAudioData:(NSArray *)arg1 ;
@end
