/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookSupport/QLExtensionPreview.h>

@class QLURLHandler, NSArray;

@interface QLURLExtensionPreview : QLExtensionPreview {

	QLURLHandler* _urlHandler;
	NSArray* _additionalURLsAccessed;

}

@property (retain) QLURLHandler * urlHandler;                     //@synthesize urlHandler=_urlHandler - In the implementation block
@property (retain) NSArray * additionalURLsAccessed;              //@synthesize additionalURLsAccessed=_additionalURLsAccessed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(QLURLHandler *)urlHandler;
-(void)setUrlHandler:(QLURLHandler *)arg1 ;
-(id)initWithURLHandler:(id)arg1 previewDescription:(id)arg2 ;
-(id)initWithURL:(id)arg1 previewDescription:(id)arg2 ;
-(NSArray *)additionalURLsAccessed;
-(void)setAdditionalURLsAccessed:(NSArray *)arg1 ;
@end

