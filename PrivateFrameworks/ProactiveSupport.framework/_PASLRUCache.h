/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface _PASLRUCache : NSObject {

	_PASLock* _lock;
	unsigned long long _countLimit;

}
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
@end

