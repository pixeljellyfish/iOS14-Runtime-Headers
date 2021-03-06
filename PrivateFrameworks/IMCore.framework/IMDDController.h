/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject;

@interface IMDDController : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;

}
+(id)sharedInstance;
-(void)scanMessage:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)scanMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3 ;
-(void)_processLinkInAttributedString:(id)arg1 ;
-(BOOL)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2 ;
-(DDScannerRef)sharedScanner;
-(id)scannerQueue;
@end

