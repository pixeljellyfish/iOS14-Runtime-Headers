/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)featureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(long long)_bitCount;
-(id)initWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
-(id)_rootFeatures;
@end
