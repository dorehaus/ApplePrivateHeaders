/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@class ICNFMCAttachment;

@interface ICNFMCAttachmentWrappingTextAttachment : NSTextAttachment {

	ICNFMCAttachment* _messageAttachment;

}

@property (nonatomic,readonly) ICNFMCAttachment * messageAttachment;              //@synthesize messageAttachment=_messageAttachment - In the implementation block
-(id)initWithFileWrapper:(id)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(ICNFMCAttachment *)messageAttachment;
@end

