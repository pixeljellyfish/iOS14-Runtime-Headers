/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {

	unsigned long long _cachedHash;
	unsigned long long _priority;
	RERelevanceProviderEnvironment* _environment;

}
+(id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2 ;
+(id)relevanceSimulatorID;
-(unsigned long long)_hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)environment;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryEncoding;
-(unsigned long long)relevancePriority;
-(id)providerWithPriority:(unsigned long long)arg1 ;
@end
