/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(void)setCompletionHandlers:(id)arg1 ;
-(void)setFormattedTextPieces:(id)arg1 ;
-(void)_invokeCompletionHandlers;
-(id)completionHandlers;
-(BOOL)isRichTextResolved;
-(void)setText:(id)arg1 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
@end

