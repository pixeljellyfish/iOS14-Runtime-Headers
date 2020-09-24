/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TMLJSONObject.h>

@class TMLJSONObject, NSString;

@interface TMLJSONObjectDerived : TMLJSONObject {

	TMLJSONObject* _parent;
	NSString* _keyPath;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)rawJSON;
-(void)setRawJSON:(id)arg1 ;
-(id)initWithParent:(id)arg1 keyPath:(id)arg2 ;
-(void)tmlAddObserver:(id)arg1 forKeyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)tmlRemoveObserver:(id)arg1 forKeyPath:(id)arg2 ;
@end
