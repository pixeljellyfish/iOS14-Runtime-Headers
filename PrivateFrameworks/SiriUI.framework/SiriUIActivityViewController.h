/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;
@interface SiriUIActivityViewController : UIActivityViewController {

	id<SiriUIActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SiriUIActivityViewControllerDelegate>)arg1 ;
-(id<SiriUIActivityViewControllerDelegate>)delegate;
@end

