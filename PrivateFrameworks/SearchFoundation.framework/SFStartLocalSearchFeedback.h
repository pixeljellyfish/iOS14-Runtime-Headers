/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {

	unsigned long long _indexType;

}

@property (assign,nonatomic) unsigned long long indexType;              //@synthesize indexType=_indexType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4 ;
-(unsigned long long)indexType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 ;
-(void)setIndexType:(unsigned long long)arg1 ;
@end
