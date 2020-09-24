/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSIndexSet;


@protocol MSPContainerEditReplacement <MSPContainerEdit>
@property (nonatomic,readonly) NSArray * originalImmutableObjects; 
@property (nonatomic,readonly) NSArray * replacementImmutableObjects; 
@property (nonatomic,readonly) NSIndexSet * indexesOfReplacedObjects; 
@required
-(NSArray *)originalImmutableObjects;
-(NSArray *)replacementImmutableObjects;
-(NSIndexSet *)indexesOfReplacedObjects;

@end
