/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureTransformer.h>

@class NSDate;

@interface _REChangeFeatureTransformer : REFeatureTransformer {

	double _interval;
	NSDate* _lastChangeDate;
	unsigned long long _value;

}

@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsInvalidation;
+(id)functionName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_outputType;
-(unsigned long long)hash;
-(void)configureWithInvocation:(id)arg1 ;
-(long long)_bitCount;
-(unsigned long long)_featureCount;
-(unsigned long long)_createTransformFromValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_validateWithFeatures:(id)arg1 ;
-(void)_updateConfigurationForInterval:(double)arg1 ;
@end

