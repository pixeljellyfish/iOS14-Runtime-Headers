/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NUResponse : NSObject {

	id _result;
	NSError* _error;

}

@property (retain) id result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithError:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)result;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(id)result:(id*)arg1 ;
-(void)setResult:(id)arg1 ;
-(id)description;
@end
