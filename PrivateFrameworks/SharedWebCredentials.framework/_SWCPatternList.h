/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding> {

	SWCPatternStorage _storage[0];

}

@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
+(id)patternListWithDetailsDictionary:(id)arg1 defaults:(id)arg2 ;
+(id)patternListWithArray:(id)arg1 ;
+(id)patternListWithDetailsDictionary:(id)arg1 ;
-(id)redactedDescription;
-(id)debugDescription;
-(id)_descriptionDebug:(BOOL)arg1 redacted:(BOOL)arg2 ;
-(void)enumeratePatternsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const SCD_Struct_SW0*)arg3 matchingPattern:(id*)arg4 index:(unsigned long long*)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
