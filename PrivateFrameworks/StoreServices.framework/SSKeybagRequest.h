/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	id _contentIdentifier;
	long long _options;

}

@property (readonly) NSNumber * accountID;                          //@synthesize accountID=_accountID - In the implementation block
@property (copy) id contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (assign) long long keybagOptions;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)arg1 ;
-(void)dealloc;
-(void)setContentIdentifier:(id)arg1 ;
-(id)accountIdentifier;
-(NSNumber *)accountID;
-(id)initWithAccountIdentifier:(id)arg1 ;
@end

