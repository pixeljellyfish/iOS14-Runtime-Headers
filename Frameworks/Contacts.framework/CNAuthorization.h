/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNAuthorization : NSObject
+(id)logger;
+(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
@end

