/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {

	NSMutableArray* _backendArray;

}
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)_backFillUntilCount:(unsigned long long)arg1 ;
-(BOOL)containsAnyObjects:(id)arg1 ;
@end
