/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(void)removeItem:(id)arg1;
-(NSArray *)itemIdentifiers;
-(NSString *)sectionIdentifier;
-(void)updateItem:(id)arg1;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToHead:(id)arg1;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)moveItemToTail:(id)arg1;
-(void)updateSection;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;

@end

