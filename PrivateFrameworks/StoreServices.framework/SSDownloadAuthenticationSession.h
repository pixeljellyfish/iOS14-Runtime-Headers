/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownloadSession.h>

@class NSURLAuthenticationChallenge;

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge * authenticationChallenge; 
-(void)_finishWithType:(int)arg1 credential:(id)arg2 ;
-(NSURLAuthenticationChallenge *)authenticationChallenge;
@end

