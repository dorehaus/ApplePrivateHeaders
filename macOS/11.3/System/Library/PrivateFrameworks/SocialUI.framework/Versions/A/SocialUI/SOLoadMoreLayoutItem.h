/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <libobjc.A.dylib/IMChatTranscriptDrawable.h>

@class IMTranscriptChatItem, NSString;

@interface SOLoadMoreLayoutItem : NSObject <IMChatTranscriptDrawable> {

	IMTranscriptChatItem* _chatTranscriptItem;

}

@property (nonatomic,retain) IMTranscriptChatItem * chatTranscriptItem;              //@synthesize chatTranscriptItem=_chatTranscriptItem - In the implementation block
@property (nonatomic,readonly) long long layoutOrientation; 
@property (nonatomic,readonly) long long layoutClassification; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(id)itemTypeIdentifier;
-(long long)layoutOrientation;
-(CGSize)sizeConstrainedToWidth:(double)arg1 ;
-(long long)layoutClassification;
-(long long)verticalSpaceToPrecedingItemOfClassification:(long long)arg1 ;
-(void)setChatTranscriptItem:(IMTranscriptChatItem *)arg1 ;
-(IMTranscriptChatItem *)chatTranscriptItem;
@end
