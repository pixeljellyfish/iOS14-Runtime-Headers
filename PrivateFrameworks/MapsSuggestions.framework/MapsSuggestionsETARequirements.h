/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MapsSuggestionsETARequirements : NSObject <NSCopying> {

	double _maxAge;
	double _maxDistance;
	double _minAccuracy;

}

@property (nonatomic,readonly) double maxAge;                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) double maxDistance;              //@synthesize maxDistance=_maxDistance - In the implementation block
@property (nonatomic,readonly) double minAccuracy;              //@synthesize minAccuracy=_minAccuracy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maxAge;
-(double)maxDistance;
-(id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3 ;
-(double)minAccuracy;
@end
