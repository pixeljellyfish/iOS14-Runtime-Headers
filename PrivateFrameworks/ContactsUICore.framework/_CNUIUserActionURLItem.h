/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem {

	BOOL _isSensitive;
	CNFuture* _url;

}

@property (nonatomic,readonly) CNFuture * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isSensitive;              //@synthesize isSensitive=_isSensitive - In the implementation block
-(BOOL)isSensitive;
-(BOOL)isEqual:(id)arg1 ;
-(id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(BOOL)arg2 ;
-(id)performActionWithContext:(id)arg1 ;
-(unsigned long long)hash;
-(CNFuture *)url;
-(id)description;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(BOOL)arg5 group:(long long)arg6 options:(unsigned long long)arg7 ;
-(id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6 ;
@end

