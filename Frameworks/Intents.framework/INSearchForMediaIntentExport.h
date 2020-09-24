/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INMediaSearch, INPrivateSearchForMediaIntentData;


@protocol INSearchForMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) INPrivateSearchForMediaIntentData * privateSearchForMediaIntentData; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(INPrivateSearchForMediaIntentData *)privateSearchForMediaIntentData;
-(void)setPrivateSearchForMediaIntentData:(id)arg1;

@end
