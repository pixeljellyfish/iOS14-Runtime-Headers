/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTVoiceProfileMigration : NSObject
+(unsigned long long)getCurrentVoiceProfileVersionForLanguageCode:(id)arg1 ;
+(void)updateVoiceProfileVersionFileForLanguageCode:(id)arg1 ;
+(BOOL)checkIfMigrationNecessaryForCompatibilityVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
+(BOOL)migrateVoiceProfileToVersion:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
@end
