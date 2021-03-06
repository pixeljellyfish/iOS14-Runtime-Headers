/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSArray * texts; 
+(id)estimateTTSRequestDuration;
+(id)estimateTTSRequestDurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setLocale:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)texts;
-(NSString *)locale;
-(BOOL)requiresResponse;
-(void)setTexts:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
@end

