/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol ICNFMCMessageSortingInterface <NSObject>
@property (nonatomic,readonly) int colorForSort; 
@property (readonly) double dateLastViewedAsTimeIntervalSince1970; 
@property (nonatomic,readonly) unsigned messageFlags; 
@property (nonatomic,readonly) unsigned long long messageSize; 
@property (nonatomic,readonly) unsigned long long numberOfAttachments; 
@property (copy,readonly) NSString * subject; 
@property (readonly) unsigned long long subjectPrefixLength; 
@property (copy,readonly) NSArray * to; 
@property (readonly) double dateReceivedAsTimeIntervalSince1970; 
@property (readonly) double dateSentAsTimeIntervalSince1970; 
@property (nonatomic,readonly) id<ICNFMCMailbox> mailbox; 
@required
-(NSString *)subject;
-(unsigned long long)messageSize;
-(NSArray *)to;
-(id<ICNFMCMailbox>)mailbox;
-(unsigned long long)numberOfAttachments;
-(unsigned)messageFlags;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(double)dateLastViewedAsTimeIntervalSince1970;
-(int)colorForSort;
-(unsigned long long)subjectPrefixLength;

@end

