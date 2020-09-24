/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSString, NSURL;

@interface NAChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {

	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)title;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(NSURL *)url;
-(id)initWithChannel:(id)arg1 ;
@end
