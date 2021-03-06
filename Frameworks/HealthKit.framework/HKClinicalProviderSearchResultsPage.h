/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HKClinicalProviderSearchResultsPage : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _searchResults;
	long long _from;
	long long _nextFrom;
	long long _size;

}

@property (nonatomic,copy,readonly) NSArray * searchResults;              //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) long long from;                            //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) long long nextFrom;                        //@synthesize nextFrom=_nextFrom - In the implementation block
@property (nonatomic,readonly) long long size;                            //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)from;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)nextFrom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)size;
-(id)initWithSearchResults:(id)arg1 from:(long long)arg2 nextFrom:(long long)arg3 size:(long long)arg4 ;
-(id)copyWithSearchResults:(id)arg1 ;
-(NSArray *)searchResults;
@end

