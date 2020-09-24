/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QLThumbnailRequestOperation.h>

@class UIImage, NSError;

@interface QLTThumbnailOperation : QLThumbnailRequestOperation {

	UIImage* _image;
	NSError* _error;
	/*^block*/id _needsAdditionalTime;

}

@property (readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (copy) id needsAdditionalTime;              //@synthesize needsAdditionalTime=_needsAdditionalTime - In the implementation block
-(NSError *)error;
-(UIImage *)image;
-(id)needsAdditionalTime;
-(void)setNeedsAdditionalTime:(id)arg1 ;
@end
