/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTextMessagePartChatItem.h>

@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy,readonly) NSArray * subparts;              //@synthesize subparts=_subparts - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 subparts:(id)arg3 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
-(NSArray *)subparts;
@end

