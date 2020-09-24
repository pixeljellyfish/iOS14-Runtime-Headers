/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary, TransparencyNetworkRequest;

@interface TransparencyResponse : NSObject {

	NSData* _data;
	NSDictionary* _metadata;
	TransparencyNetworkRequest* _request;

}

@property (retain) TransparencyNetworkRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (retain) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSData *)data;
-(NSDictionary *)metadata;
-(void)setData:(NSData *)arg1 ;
-(TransparencyNetworkRequest *)request;
-(void)setRequest:(TransparencyNetworkRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3 ;
-(id)serverHint;
@end
