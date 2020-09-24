/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCollectionSupplementaryView.h>

@class CKAvatarView;

@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView {

	CKAvatarView* _avatarView;

}

@property (nonatomic,retain) CKAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)supplementaryViewKindPrefix;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(CKAvatarView *)avatarView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)configureForChatItem:(id)arg1 ;
@end
