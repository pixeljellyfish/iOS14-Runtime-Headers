/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange {

	NSSet* _momentLocalIdentifiers;

}

@property (nonatomic,readonly) NSSet * momentLocalIdentifiers;              //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
-(unsigned long long)changeCount;
-(NSSet *)momentLocalIdentifiers;
-(unsigned long long)type;
-(id)description;
-(id)initWithMomentLocalIdentifiers:(id)arg1 ;
@end

