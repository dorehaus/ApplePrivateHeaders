/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property (nonatomic,copy) NSSet * remoteIDs; 
@property (nonatomic,copy) NSArray * messages; 
@property (nonatomic,copy) NSSet * labelsToAdd; 
@property (nonatomic,copy) NSSet * labelsToRemove; 
@required
-(NSArray *)messages;
-(void)setMessages:(id)arg1;
-(NSSet *)remoteIDs;
-(void)setRemoteIDs:(id)arg1;
-(NSSet *)labelsToAdd;
-(NSSet *)labelsToRemove;
-(void)setLabelsToAdd:(id)arg1;
-(void)setLabelsToRemove:(id)arg1;

@end
