/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFSSHKeyFormat <NSObject>
@required
+(id)localizedDisplayName;
+(id)defaultKeySize;
+(id)possibleKeySizes;
+(id)privateKeyType;
+(id)publicKeyType;
+(id)privateKeySpecifier;
+(id)publicKeySpecifier;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3;
+(id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2;

@end

