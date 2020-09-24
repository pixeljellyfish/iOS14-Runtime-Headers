/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _SFKeySpecifier;


@protocol _SFEncryptionOperation <NSObject,NSCopying,NSSecureCoding>
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
@required
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
-(_SFKeySpecifier *)encryptionKeySpecifier;

@end
